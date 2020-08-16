#ifndef WIDGET_H
#define WIDGET_H

#include "geometryengine.h"

#include <QOpenGLWidget>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLBuffer>
#include <QOpenGLShaderProgram>


class GeometryEngine;


class Widget :protected QOpenGLFunctions, public QOpenGLWidget{

public :
    Widget();
    ~Widget();

protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;
    void initShaders();

private:
    QOpenGLShaderProgram *sp;
    GeometryEngine *geometries = nullptr;
    QMatrix4x4 projection;

};


#endif // WIDGET_H
