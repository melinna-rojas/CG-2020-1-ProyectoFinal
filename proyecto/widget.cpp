#include "widget.h"
//#include <QOpenGLFunctions>
#include <iostream>
using namespace std;
Widget::Widget()
{
   // initializeGL();
    //paintGL();

}

Widget::~Widget()
{

}

void Widget::initializeGL()
{
    //initializeOpenGLFunctions();

    //Homólogo a la función init() de clases
    sp = new QOpenGLShaderProgram();

    initShaders(sp);

    setupVertices();

    cameraX = 0.0f;
    cameraY = 0.0f;
    cameraZ = 8.0f;
    cubeLocX = 0.0f;
    cubeLocY = -2.0f;
    cubeLocZ = 0.0f;


}

void Widget::resizeGL(int w, int h)
{

}

void Widget::initShaders(QOpenGLShaderProgram *program)
{
    // Compile vertex shader
   if (!program->addShaderFromSourceFile(QOpenGLShader::Vertex, ":/vshader.glsl"))
        close();

    // Compile fragment shader
     if (!program->addShaderFromSourceFile(QOpenGLShader::Fragment, ":/fshader.glsl"))
        close();

    // Link shader pipeline
    if (!program->link())
        close();

    // Bind shader pipeline for use
    if (!program->bind())
        close();
}

void Widget::setupVertices()
{
    float vertices[108] = {
            //side 01
         -0.5f,  0.5f, -0.5f, -0.5f, -0.5f, -0.5f,  0.5f, -0.5f, -0.5f, //Triangle 01
          0.5f, -0.5f, -0.5f,  0.5f,  0.5f, -0.5f, -0.5f,  0.5f, -0.5f, //Triangle 02
            //side 02
          0.5f, -0.5f, -0.5f,  0.5f, -0.5f,  0.5f,  0.5f,  0.5f, -0.5f, //Triangle 03
          0.5f, -0.5f,  0.5f,  0.5f,  0.5f,  0.5f,  0.5f,  0.5f, -0.5f, //Triangle 04
            //side 03
          0.5f, -0.5f,  0.5f, -0.5f, -0.5f,  0.5f,  0.5f,  0.5f,  0.5f, //Triangle 05
         -0.5f, -0.5f,  0.5f, -0.5f,  0.5f,  0.5f,  0.5f,  0.5f,  0.5f, //Triangle 06
            //side 04
         -0.5f, -0.5f,  0.5f, -0.5f, -0.5f, -0.5f, -0.5f,  0.5f,  0.5f, //Triangle 07
         -0.5f, -0.5f, -0.5f, -0.5f,  0.5f, -0.5f, -0.5f,  0.5f,  0.5f, //Triangle 08
            //side 05
         -0.5f, -0.5f,  0.5f,  0.5f, -0.5f,  0.5f,  0.5f, -0.5f, -0.5f, //Triangle 09
          0.5f, -0.5f, -0.5f, -0.5f, -0.5f, -0.5f, -0.5f, -0.5f,  0.5f, //Triangle 10
            //side 06
         -0.5f,  0.5f, -0.5f,  0.5f,  0.5f, -0.5f,  0.5f,  0.5f,  0.5f, //Triangle 11
          0.5f,  0.5f,  0.5f, -0.5f,  0.5f,  0.5f, -0.5f,  0.5f, -0.5f  //Triangle 12
        };

        VAO.create();
        VAO.bind();

        VBO.create();
        VBO.setUsagePattern(QOpenGLBuffer::StaticDraw);
        VBO.bind();
        VBO.allocate(vertices, sizeof(vertices));

        VAO.release();
        VBO.release();
}


void Widget::paintGL()
{
    sp->bind(); //Same as glUseProgram
    VAO.bind();
    VBO.bind();

    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    // Clear color and depth buffer
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //t1  = glGetUniformLocation(sp->programId(), "Texture0");
    //t2 = glGetUniformLocation(sp->programId(), "Texture1");

    //mLoc = glGetUniformLocation(sp->programId(),"m_matrix");
    //vLoc = glGetUniformLocation(sp->programId(),"v_matrix");
    //projLoc = glGetUniformLocation(sp->programId(),"proj_matrix");

    width = 600;
    height = 600;

    aspect = (float) width / (float) height;


    pMat.perspective(0.5472f, aspect, 0.1f, 100.0f);
    vMat.lookAt(QVector3D(-cameraX,-cameraY,-cameraZ),
                QVector3D(0,0,0),
                QVector3D(0,1,0));

    mMat.translate(QVector3D(cubeLocX, cubeLocY, cubeLocZ));
    //cout << vMat.row(1). <<endl;
    //QMatrix4x4 matrix;
    //matrix.translate(0.0, 0.0, -5.0);


    // Set modelview-projection matrix
    sp->setUniformValue("m_matrix", m1 * mMat);
    sp->setUniformValue("v_matrix", vMat);
    sp->setUniformValue("proj_matrix", pMat);


    sp->enableAttributeArray("position");
    sp->setAttributeArray("position", GL_FLOAT, 0, 3);
    cout<<"Llegue"<<endl;
    glDrawArrays(GL_TRIANGLES, 0, 36);


    // Use texture unit 0 which contains cube.png
    //sp->setUniformValue("texture", 0);

    // Draw cube geometry
   // geometries->drawCubeGeometry(&sp);
}
