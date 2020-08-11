#ifndef SCREENGL_H
#define SCREENGL_H

#include <QOpenGLWidget>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLBuffer>
#include <QOpenGLShaderProgram>

class screenGL : public QOpenGLWidget{

   public:
    screenGL();
    ~screenGL();

   protected:
   void	initializeGL();
   void	paintGL();
   void	resizeGL(int w, int h);

private:
   QOpenGLVertexArrayObject VAO;
   QOpenGLBuffer VBO;
   QOpenGLShaderProgram *sp;
};




#endif // SCREENGL_H
