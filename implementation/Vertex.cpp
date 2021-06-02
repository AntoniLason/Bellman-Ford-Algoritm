//
// Created by 13ant on 29.05.2021.
//

#include "Vertex.h"
Vertex::Vertex( int vN): vertexNumber(vN), currentVertexValue(9999)
{
    predesesor = nullptr;
}
Vertex::Vertex(int vN, std::vector<std::pair<int, int>> & eav): vertexNumber(vN), currentVertexValue(9999)
{
    predesesor = nullptr;
    for (int i = 0 ; i< eav.size(); i++)
    {
        edgeAndValue.push_back(std::make_pair(eav[i].first, eav[i].second));

    }
}
void Vertex::setVertexNumber(int nr)
{
    vertexNumber = nr;
}
int Vertex::getVertexNumber()
{
    return vertexNumber;
}
void Vertex::setNextEdgeAndValue(int e, int v)
{
    edgeAndValue.push_back(std::make_pair(e, v));
}
int Vertex::getEdgeUnderIndex(int index)
{
    return edgeAndValue[index].first;
}
int Vertex::getValueUnderIndex(int index)
{
    return edgeAndValue[index].second;
}
int  Vertex::getcurrentVertexValue()
{
    return currentVertexValue;
}
void Vertex::setcurrentVdertexValue(int value)
{
    currentVertexValue = value;
}
int Vertex::getSizeOfEAV()
{
    return edgeAndValue.size();
}