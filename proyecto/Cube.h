#ifndef CUBE_H
#define CUBE_H

#include <vector>
#include <QOpenGLWidget>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLBuffer>
#include <QOpenGLShaderProgram>

using namespace std;

class Cube{
    public :
    Cube();

    void Draw();

    private:
        GLuint indexCube[36];
        GLuint cubeVBO, cubeVAO, cubeEBO;

        void setUpCube();
};

#endif // CUBE_H
