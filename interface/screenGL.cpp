#include <screengl.h>

screenGL::screenGL()
{

}

screenGL::~screenGL()
{

}

void screenGL::initializeGL()
{
    sp = new QOpenGLShaderProgram();
    sp->addShaderFromSourceCode(QOpenGLShader::Vertex,
                                "#version 450\n"
                                "in vec3 position;\n"
                                "out vec4 fragColor;\n"
                                "void main() {\n"
                                "  fragColor = vec4(0.0,0.55,0.75,1.0);\n"
                                "  gl_Position = vec4(position,1.0);\n"
                                "}");

    sp->link();

    float vertices[]={
        0.0f, 0.5f, 0.0f,
        0.5f, -0.5f,0.0f,
        -0.5f,-0.5f,0.0f
    };

    VAO.create();
    VAO.bind();

    VBO.create();
    VBO.setUsagePattern(QOpenGLBuffer::StaticDraw);
    VBO.bind();
    VBO.allocate(vertices,sizeof (vertices));

    VAO.release();
    VBO.release();
}

void screenGL::paintGL()
{
    sp->bind();
    VAO.bind();
    VBO.bind();

    sp->enableAttributeArray("position");
    sp->setAttributeArray("position",GL_FLOAT,0,3);
    glClearColor(1.0f,0.0f,0.0f,0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glDrawArrays(GL_TRIANGLES,0,3);
}

void screenGL::resizeGL(int w, int h)
{

}

