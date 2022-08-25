#include"ListaEstudiante.h"

using namespace std;

int main(){    
    ListaEstudiantes lista;
   
    Estudiante q("Estudiante 2", 20);
    NodoEstudiante *nuevo2= new NodoEstudiante(q);
    lista.insertarNodo(nuevo2);

    Estudiante p("Estudiante 1", 15);
    NodoEstudiante *nuevo= new NodoEstudiante(p);
    lista.insertarPrimero(nuevo);
    
    Estudiante n("Estudiante 3", 25);
    NodoEstudiante *nuevo3= new NodoEstudiante(n);
    lista.insertarNodo(nuevo3);

    Estudiante z("Estudiante 4", 30);
    NodoEstudiante *nuevo4= new NodoEstudiante(z);
    lista.insertarNodo(nuevo4);

    lista.mostrarLista();

    cout<<"\nBusqueda de 'Estudiante 4': ";
    bool res = lista.buscarEstudiante("Estudiante 4");

    if (res)
        cout << "Existe!\n" << endl;
    else
        cout << "No Existe!\n" << endl;
    cout << "--------\n" << endl;

    cout<<"Se quita primer nodo\n"<<endl;
    lista.quitarPrimero();
    lista.mostrarLista();
    cout << "--------\n" << endl;

    cout<<"Se quita primer nodo\n"<<endl;
    lista.quitarPrimero();
    lista.mostrarLista();
    cout << "--------\n" << endl;

    cout<<"Se quita ultimo nodo\n"<<endl;
    lista.quitarUltimo();
    lista.mostrarLista();
    cout << "--------\n" << endl;

    cout<<"Se quita ultimo nodo\n"<<endl;
    lista.quitarUltimo();
    lista.mostrarLista();
    cout << "--------\n" << endl;

    return 0;
}