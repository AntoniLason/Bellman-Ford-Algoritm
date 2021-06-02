#include <iostream>
#include <fstream>
#include "Vertex.cpp"

///Niestety pewne struktury danych zostały przekombinowany, co zaciamnia kod
struct edge
{
    int begin;
    int end;
    int value;
};
int main() {
    std::string h; ///tak, żeby w niekturych miejscach zatrzymać program
    std::fstream plik;
    plik.open("graf.txt", std::ios::in);
    if(plik.good() != true)
    {
        std::cout<<"Nie udało się otworzyć pliku graf.txt"<<std::endl;
        std::cin>>h;
    }
    else
    {
        int numberOfVersex=0;
        int vertex;
        int value;
        int non; ///liczba sąsiadów
        plik>>numberOfVersex;
        Vertex graf[numberOfVersex];
        std::vector<edge > edges; ///początek, koniec
        for(int i = 0; i<numberOfVersex; i++)
        {
            graf[i].setVertexNumber(i);
            plik>>non;
            for(int ii=0; ii<non; ii++)
            {
                plik >> vertex;
                plik >> value;
                graf[i].setNextEdgeAndValue(vertex, value);
                graf[i].setcurrentVdertexValue(INT32_MAX); /// w przybliżeniu nieskończoność
                edge a;
                a.value = value;
                a.begin = i;
                a.end = vertex;
                edges.push_back(a);
            }
        }

        ///W tym miejscu zaczyna się właściwy algorytm Bellmana Forda
        graf[0].setcurrentVdertexValue(0); /// ustawiamy punkt startu
        for(int i =0; i<numberOfVersex; i++) /// iterujemy maksymalną ilość razy dla uproszczenia kodu,
        {
            for(int ii = 0;  ii< edges.size(); ii++)
            {
                if(graf[edges[ii].begin].getcurrentVertexValue() + edges[ii].value < graf[edges[ii].end].getcurrentVertexValue() && graf[edges[ii].begin].getcurrentVertexValue()<INT32_MAX)//wiem, jest bardzo brzytko
                {
                    graf[edges[ii].end].setcurrentVdertexValue(graf[edges[ii].begin].getcurrentVertexValue() + edges[ii].value);
                }
            }
        }
        ///szukanie ujemnych cykli

        for(int ii = 0;  ii< edges.size(); ii++)
        {
            if(graf[edges[ii].begin].getcurrentVertexValue() + edges[ii].value < graf[edges[ii].end].getcurrentVertexValue())
                std::cout<<"---------!!Wykryto ujemny cykl!!---------"<<std::endl;
        }
        std::cout<<"------Wyniki------"<<std::endl;
        std::cout<<"Wierzchołki:\t";
        for(int i = 0; i<numberOfVersex; i++ )
        {
            std::cout<<"\t"<<i;
        }
        std::cout<<std::endl <<"wartości:\t";
        for(int i = 0; i<numberOfVersex; i++ )
        {
            std::cout<<"\t"<<graf[i].getcurrentVertexValue();
        }
    }




    plik.close();
    std::cin>>h;


    ///Zakomentowany szybki test klasy. Wynik: działa
    /*
    std::cout<<"test"<<std::endl;
    Vertex a;
    std::cout<<"test1"<<std::endl;
    Vertex b(1);
    std::cout<<"test2"<<std::endl;
    std::vector<std::pair<int, int> > v;
    std::cout<<"test3"<<std::endl;
    v.push_back(std::make_pair( 1, 10));
    std::cout<<"test4"<<std::endl;
    Vertex c(2, v);
    std::cout<<"test5"<<std::endl;
    c.setVertexNumber(100);
    std::cout<<"test6"<<std::endl;
    c.setNextEdgeAndValue(2, 20);
    std::cout<<"test7"<<std::endl;
    std::cout<<"test8: "<<c.getcurrentVertexValue()<<std::endl;
    std::cout<<"test9: "<<c.getVertexNumber()<<std::endl;
    std::cout<<"test10: "<<c.getEdgeUnderIndex(0)<<std::endl;
    std::cout<<"test11: "<<c.getValueUnderIndex(1)<<std::endl;
     */
    return 0;
}
