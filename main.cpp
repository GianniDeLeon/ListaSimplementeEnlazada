#include <iostream>
#include <lista.h>
#include <nodo.h>
using namespace std;

int main()
{
    Lista *lista = new Lista();

    lista->agregar(4);
    lista->agregar(2);
    lista->agregar(3);
    lista->agregar(1);
    lista->agregar(40);
    lista->recorrer();
    if(lista->eliminar(40)){
        cout <<"Nodo eliminado correctamente"<<endl;
    }else{
        cout <<"Nodo no encontrado en la lista"<<endl;
    }
    lista->recorrer();
    Nodo *aux = lista->buscar(40);
    if(aux){
        cout<<"Nodo encontrado id: "<<aux->id<<endl;
    }else{
        cout<<"Nodo no encontrado"<<endl;
    }
    if(lista->listaVacia()){
        cout<<"La lista esta vacia:"<<endl;
    }else{
        cout<<"La lista no esta vacia"<<endl;
    }
    return 0;
}
