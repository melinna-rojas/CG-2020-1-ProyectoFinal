#ifndef GEOMETRYENGINE_H
#define GEOMETRYENGINE_H
#include <QOpenGLFunctions>
#include <QOpenGLShaderProgram>
#include <QOpenGLBuffer>


class GeometryEngine : protected QOpenGLFunctions
{
public:
    GeometryEngine();
    virtual ~GeometryEngine();

    void drawCubeGeometry(QOpenGLShaderProgram *program);
    void drawConeGeometry(QOpenGLShaderProgram *program);
    void drawCylinderGeometry(QOpenGLShaderProgram *program);
    void drawSphereGeometry(QOpenGLShaderProgram *program);

private:
    void initCubeGeometry();
    void initConeGeometry();
    void initCylinderGeometry();
    void initSphereGeometry();

    QOpenGLBuffer arrayBuf;
    QOpenGLBuffer indexBuf;
};
#endif // CUBE_H
