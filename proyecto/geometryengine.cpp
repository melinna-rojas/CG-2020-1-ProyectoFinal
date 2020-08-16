#include "geometryengine.h"

#include <QVector2D>
#include <QVector3D>

struct VertexData
{
    QVector3D position;
    QVector2D texCoord;
};

//! [0]
GeometryEngine::GeometryEngine()
    : indexBuf(QOpenGLBuffer::IndexBuffer)
{
    initializeOpenGLFunctions();

    // Generate 2 VBOs
    arrayBuf.create();
    //indexBuf.create();

    // Initializes cube geometry and transfers it to VBOs
    initCubeGeometry();
}

GeometryEngine::~GeometryEngine()
{
    arrayBuf.destroy();
    //indexBuf.destroy();
}

void GeometryEngine::initCubeGeometry()
{
    /*float vertices[24] = {
        -0.5f, -0.5f, -0.5f, // front bottom left  0
         0.5f, -0.5f, -0.5f, // front bottom right 1
         0.5f,  0.5f, -0.5f, // front top right    2
        -0.5f,  0.5f, -0.5f, // front top left     3
        -0.5f, -0.5f, 0.5f, // back bottom left   4
         0.5f, -0.5f, 0.5f, // back bottom right  5
         0.5f,  0.5f, 0.5f, // back top right     6
        -0.5f,  0.5f, 0.5f  // back top left      7
    };*/

    float vertices[108] = {
            //side 01
         -1.0f,  1.0f, -1.0f, -1.0f, -1.0f, -1.0f,  1.0f, -1.0f, -1.0f, //Triangle 01
          1.0f, -1.0f, -1.0f,  1.0f,  1.0f, -1.0f, -1.0f,  1.0f, -1.0f, //Triangle 02
            //side 02
          1.0f, -1.0f, -1.0f,  1.0f, -1.0f,  1.0f,  1.0f,  1.0f, -1.0f, //Triangle 03
          1.0f, -1.0f,  1.0f,  1.0f,  1.0f,  1.0f,  1.0f,  1.0f, -1.0f, //Triangle 04
            //side 03
          1.0f, -1.0f,  1.0f, -1.0f, -1.0f,  1.0f,  1.0f,  1.0f,  1.0f, //Triangle 05
         -1.0f, -1.0f,  1.0f, -1.0f,  1.0f,  1.0f,  1.0f,  1.0f,  1.0f, //Triangle 06
            //side 04
         -1.0f, -1.0f,  1.0f, -1.0f, -1.0f, -1.0f, -1.0f,  1.0f,  1.0f, //Triangle 07
         -1.0f, -1.0f, -1.0f, -1.0f,  1.0f, -1.0f, -1.0f,  1.0f,  1.0f, //Triangle 08
            //side 05
         -1.0f, -1.0f,  1.0f,  1.0f, -1.0f,  1.0f,  1.0f, -1.0f, -1.0f, //Triangle 09
          1.0f, -1.0f, -1.0f, -1.0f, -1.0f, -1.0f, -1.0f, -1.0f,  1.0f, //Triangle 10
            //side 06
         -1.0f,  1.0f, -1.0f,  1.0f,  1.0f, -1.0f,  1.0f,  1.0f,  1.0f, //Triangle 11
          1.0f,  1.0f,  1.0f, -1.0f,  1.0f,  1.0f, -1.0f,  1.0f, -1.0f  //Triangle 12
        };


    /*GLushort indices[] = {
        0, 1, 2, // front face
        2, 3, 1,
        4, 5, 6,
        6, 7, 4,
        7, 3, 0,
        0, 4, 7,
        6, 2, 1,
        1, 5, 6,
        0, 1, 5,
        5, 4, 0,
        3, 2, 6,
        6, 7, 3
    };*/


    // Transfer vertex data to VBO 0
    arrayBuf.bind();
    arrayBuf.allocate(vertices, 24 * sizeof(vertices));

    // Transfer index data to VBO 1
    //indexBuf.bind();
    //indexBuf.allocate(indices, 36 * sizeof(GLushort));

}


void GeometryEngine::drawCubeGeometry(QOpenGLShaderProgram *program)
{
    // Tell OpenGL which VBOs to use
    arrayBuf.bind();
    //indexBuf.bind();

    // Offset for position
    quintptr offset = 0;

    // Tell OpenGL programmable pipeline how to locate vertex position data
    int vertexLocation = program->attributeLocation("a_position");
    program->enableAttributeArray(vertexLocation);
    program->setAttributeBuffer(vertexLocation, GL_FLOAT, offset, 3, sizeof(float));


    // Draw cube geometry using indices from VBO 1
    glDrawArrays(GL_TRIANGLES, 0, 36);
}

