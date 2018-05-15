#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include <nodo.h>
using namespace std;

class Lista
{
public:
    Lista();
    Nodo *inicio,*final;
    bool listaVacia();
    void agregar(int id);
    Nodo *buscar(int id);
    void recorrer();
    bool eliminar(int id);
    void graficar();
};

#endif // LISTA_H
