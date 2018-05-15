#include "lista.h"

Lista::Lista()
{
    inicio = final = NULL;
}

bool Lista::listaVacia()
{
    return inicio == NULL;
}

void Lista::agregar(int id)
{
    Nodo *nuevo = new Nodo(id);
    if(inicio){
        final->siguiente = nuevo;
        final = nuevo;
    }else{
        inicio = final = nuevo;
    }
}

Nodo *Lista::buscar(int id)
{
    Nodo *aux = inicio;
    while (aux) {
        if(aux->id == id){
            return aux;
        }
        aux = aux->siguiente;
    }
    return NULL;
}

void Lista::recorrer()
{
    cout<<"##########INICIO DE LA LISTA##########"<<endl;
    Nodo *aux = inicio;
    while (aux) {
        cout<<"id: "<<aux->id<<endl;
        aux = aux->siguiente;
    }
    cout<<"#########FIN DE LA LISTA##########"<<endl;
}

bool Lista::eliminar(int id)
{
    Nodo *aux = inicio;
    if(aux->id == id){
        inicio = aux->siguiente;
        delete(aux);
    }else {
        while(aux){
            if(aux->siguiente){
                if(aux->siguiente->id == id){
                    aux->siguiente = aux->siguiente->siguiente;
                    return true;
                }
            }
            aux = aux->siguiente;
        }
    }
    return false;
}

void Lista::graficar()
{
    Nodo *aux = inicio;
    aux->siguiente = aux->siguiente->siguiente;
}
