//
// Created by 13ant on 29.05.2021.
//

#ifndef BELLMAN_FORD_ALGORITM_VERTEX_H
#define BELLMAN_FORD_ALGORITM_VERTEX_H

#include <vector>

class Vertex {
    int vertexNumber;
    std::vector<std::pair<int, int> > edgeAndValue ; ///pierwsze w parze - wierzchołek (drugi koniec krawędzi), drugie w parze - wartość krawędzi
public:
    Vertex() = default;
    Vertex(int vN);
    Vertex(int vN, std::vector<std::pair<int, int>> & eav);

    ~Vertex() = default;
    void setVertexNumber(int nr);
    int getVertexNumber();
    void setNextEdgeAndValue(int e, int v);



};


#endif //BELLMAN_FORD_ALGORITM_VERTEX_H
