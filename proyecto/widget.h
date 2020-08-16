#ifndef WIDGET_H
#define WIDGET_H

#include <QOpenGLWidget>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLBuffer>
#include <QOpenGLShaderProgram>
#include "Cone.h"

class Widget :public QOpenGLWidget{
public :
    Widget();
    ~Widget();

protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;

private:
    QOpenGLVertexArrayObject VAO;
    QOpenGLBuffer VBO{
        QOpenGLBuffer::VertexBuffer
    };
    QOpenGLShaderProgram *sp;
};


#endif // WIDGET_H
