#include "widget.h"

Widget::Widget()
{

}

Widget::~Widget()
{

}

void Widget::initializeGL()
{
    sp = new QOpenGLShaderProgram();
    sp->addShaderFromSourceCode(QOpenGLShader::Vertex,
                                "#version 450\n"
                                "in vec3 position;\n"
                                "out vec4 fragColor;\n"
                                "void main(){\n"
                                "   fragColor = vec4(0.0,0.55,0.75,1.0);\n"
                                "   gl_Position = vec4(position,1.0);\n"
                                ")");
   //Deberiamos ver como linkearlo a los archivos creados
    // sp->addShaderFromSourceFile(QOpenGLShader::Fragment,:fragmentShader.fsh)
    sp->addShaderFromSourceCode(QOpenGLShader::Fragment,
                                "#version 450 \n"
                                "in vec4 fragColor;\n"
                                "out vec4 finalColor;\n"
                                "void main(){\n"
                                "   finalColor = fragColor;\n"
                                "}"
                                );

    sp->link();

    //Entendería que este arreglo debería cambiar según el botón?
    float vertices[] = {
        0.0f, 0.5f,0.0f,
        0.5f,-0.5f,0.0f,
        -0.5f,-0.5f,0.0f
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

}

void Widget::paintGL()
{
    sp->bind();
    VAO.bind();
    VBO.bind();

    sp->enableAttributeArray("position");
    sp->setAttributeArray("position", GL_FLOAT,0,3);

    glClearColor(1.0f,0.0f,0.0f,0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glDrawArrays(GL_TRIANGLES,0,3);
}
