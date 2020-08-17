#ifndef WIDGET_H
#define WIDGET_H

//#include "geometryengine.h"

#include <QOpenGLWidget>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLBuffer>
#include <QOpenGLShaderProgram>
#include <QOpenGLFunctions>


//class GeometryEngine;


class Widget :  public QOpenGLWidget {

public :
    Widget();
    ~Widget();

protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;
    void initShaders(QOpenGLShaderProgram *program);
    void setupVertices();

private:
    QOpenGLShaderProgram *sp;
    QOpenGLVertexArrayObject VAO;
    QOpenGLBuffer VBO{QOpenGLBuffer::VertexBuffer};
    //GeometryEngine *geometries = nullptr;
    QMatrix4x4 pMat, vMat, mMat, m1;
    float cameraX, cameraY, cameraZ;
    float cubeLocX, cubeLocY, cubeLocZ;
    GLuint mLoc, vLoc, projLoc;
    int width, height;
    float aspect;
    //glm::mat4 pMat, vMat, mMat;
};


#endif // WIDGET_H
