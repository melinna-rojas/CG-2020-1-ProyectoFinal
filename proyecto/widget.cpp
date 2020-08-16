#include "widget.h"

Widget::Widget()
{

}

Widget::~Widget()
{

}

void Widget::initializeGL()
{
    initializeOpenGLFunctions();

    glClearColor(0, 0, 0, 1);

    initShaders();

    // Enable depth buffer
    glEnable(GL_DEPTH_TEST);

    // Enable back face culling
    glEnable(GL_CULL_FACE);

    geometries = new GeometryEngine;

}

void Widget::initShaders()
{
    // Compile vertex shader
   if (!sp.addShaderFromSourceFile(QOpenGLShader::Vertex, ":/vshader.glsl"))
        close();

    // Compile fragment shader
     if (!sp.addShaderFromSourceFile(QOpenGLShader::Fragment, ":/fshader.glsl"))
        close();

    // Link shader pipeline
    if (!sp.link())
        close();

    // Bind shader pipeline for use
    if (!sp.bind())
        close();
}

void Widget::resizeGL(int w, int h)
{
    // Calculate aspect ratio
    qreal aspect = qreal(w) / qreal(h ? h : 1);

    // Set near plane to 3.0, far plane to 7.0, field of view 45 degrees
    const qreal zNear = 3.0, zFar = 7.0, fov = 45.0;

    // Reset projection
    projection.setToIdentity();

    // Set perspective projection
    projection.perspective(fov, aspect, zNear, zFar);
}


void Widget::paintGL()
{
    // Clear color and depth buffer
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


    // Calculate model view transformation
    QMatrix4x4 matrix;
    matrix.translate(0.0, 0.0, -5.0);


    // Set modelview-projection matrix
    sp.setUniformValue("mvp_matrix", projection * matrix);

    // Use texture unit 0 which contains cube.png
    //sp->setUniformValue("texture", 0);

    // Draw cube geometry
    geometries->drawCubeGeometry(&sp);
}
