//
// Created by 13ant on 29.05.2021.
//

#ifndef BELLMAN_FORD_ALGORITM_VERTEX_H
#define BELLMAN_FORD_ALGORITM_VERTEX_H

#include <vector>


class Vertex {
    int vertexNumber;
    int currentVertexValue;
    Vertex *predesesor;
    std::vector<std::pair<int, int> > edgeAndValue ; ///pierwsze w parze - wierzchołek (drugi koniec krawędzi), drugie w parze - wartość krawędzi
public:
    Vertex() = default;
    Vertex(int vN);
    Vertex(int vN, std::vector<std::pair<int, int>> & eav);

    ~Vertex() = default;
    void setVertexNumber(int nr);
    int getVertexNumber();
    void setNextEdgeAndValue(int e, int v);
    int getEdgeUnderIndex(int index); ///zwraca numer wierzchołka z edgeAndValues
    int getValueUnderIndex(int index); ///zwraca wartość krawędzi z edgeAndValues
    int getcurrentVertexValue ();
    void setcurrentVdertexValue(int value);
    int getSizeOfEAV();



};


#endif //BELLMAN_FORD_ALGORITM_VERTEX_H
