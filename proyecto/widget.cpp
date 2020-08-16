#include "widget.h"

Widget::Widget()
{

}

Widget::~Widget()
{

}

void Widget::initializeGL()
{
    initShaders();

    float vertices[] = {
        0.0f, 0.08f,0.0f,
        0.05f,-0.05f,0.0f,
        -0.05f,-0.05f,0.0f
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

void Widget::resizeGL(int w, int h)
{
    // Calculate aspect ratio
        qreal aspect = qreal(w) / qreal(h ? h : 1);

        // Set near plane to 3.0, far plane to 7.0, field of view 45 degrees
        const qreal zNear = 3.0, zFar = 7.0, fov = 45.0;

        // Reset projection
        QMatrix4x4 projection;
        projection.setToIdentity();

        // Set perspective projection
        projection.perspective(fov, aspect, zNear, zFar);
}

void Widget::paintGL()
{
    sp->bind();
    VAO.bind();
    VBO.bind();

    sp->enableAttributeArray("position");
    sp->setAttributeArray("position", GL_FLOAT,0,3);

    glClearColor(0.0f,0.0f,0.0f,0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glDrawArrays(GL_TRIANGLES,0,3);
}

void Widget::initShaders()
{
    sp = new QOpenGLShaderProgram();
// Compile vertex shader
    //idk why it doesnt read unu
    if (!sp->addShaderFromSourceCode(QOpenGLShader::Vertex,
                                     "#version 450\n"
                                     "in vec3 position;\n"
                                     "out vec4 fragColor;\n"
                                     "void main() {\n"
                                     "    fragColor = vec4(0.3, 0.2, 0.75, 1.0);\n"
                                     "    gl_Position = vec4(position, 1.0);\n"
                                     "}"))
            //addShaderFromSourceFile(QOpenGLShader::Vertex, "\vertexShader.glsl"))
        close();

    // Compile fragment shader
    if (!sp->addShaderFromSourceCode(QOpenGLShader::Fragment,
                                     "#version 450\n"
                                     "in vec4 fragColor;\n"
                                     "out vec4 finalColor;\n"
                                     "void main(){\n"
                                     "    finalColor = fragColor;\n"
                                     "}"))
            //addShaderFromSourceFile(QOpenGLShader::Fragment, "\fragmentShader.glsl"))
        close();

    // Link shader pipeline
    if (!sp->link())
        close();

    // Bind shader pipeline for use
    if (!sp->bind())
        close();
}
