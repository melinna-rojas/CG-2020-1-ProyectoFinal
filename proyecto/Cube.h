#ifndef CUBE_H
#define CUBE_H

#include <vector>
using namespace std;
class Cube{
public :
    Cube();

    void initVertices();
    void initColors();

    vector<float> m_vertices;
    vector<float> m_colors;

};

#endif // CUBE_H
