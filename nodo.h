#ifndef NODO_H
#define NODO_H
#include <iostream>
using namespace std;

class Nodo
{
public:
    Nodo(int id);
    int id;
    Nodo *siguiente;
};

#endif // NODO_H
