#ifndef CONE_H
#define CONE_H

#include <vector>
using namespace std;
class Cone{
public :
    Cone();

    void initVertices();
    void initColors();

    vector<float> m_vertices;
    vector<float> m_colors;
};

#endif // CONE_H
