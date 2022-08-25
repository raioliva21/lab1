#include"NodoEstudiante.h"

using namespace std;

class ListaEstudiantes{
    private:
        NodoEstudiante *primero, *ultimo;

    public:
        ListaEstudiantes(){
            primero = ultimo = NULL;
        }

        void insertarNodo(NodoEstudiante *nuevo){
            if (ultimo == NULL){
                primero = ultimo = nuevo;
            }else{
                ultimo->setVecino(nuevo);
                ultimo = nuevo;
            }            
        }

        void mostrarLista(){
            NodoEstudiante *recorrer;
            recorrer = primero;

            while(recorrer!=NULL){
                Estudiante *estudiante;
                estudiante = recorrer->getEstudiante();

                cout <<"Estudiante" << endl;
                cout <<"-- Nombre: " << estudiante->getNombre()  << endl;;
                cout <<"-- Edad: " << estudiante->getEdad() << endl;

                recorrer = recorrer->getVecino();
           }
        }

        bool buscarEstudiante(string nombre){
            NodoEstudiante *recorrer;
            recorrer = primero;

            while(recorrer!=NULL){
                if (!recorrer->getEstudiante()->getNombre().compare(nombre))
                    return true;
                
                recorrer = recorrer->getVecino();
            }
            return false;
        }

        void insertarPrimero(NodoEstudiante *nuevo){
            if (primero == NULL){
                primero = ultimo = nuevo;
            }
            else{
               nuevo->setVecino(primero);
               primero = nuevo;
            }
        }

        void quitarUltimo(){
             if (ultimo == NULL)
                return;

             if (ultimo == primero){
                delete ultimo;
                primero = ultimo = NULL;
             }else{
                NodoEstudiante *recorrer;

                // se crea nodo 'recorrer' que equivale a 1er nodo al instanciarse
                recorrer = primero;

                while(recorrer->getVecino()!=ultimo)
                    recorrer = recorrer->getVecino();

                recorrer->setVecino(NULL);
                delete ultimo;
                ultimo = recorrer; 
             }
        }

        void quitarPrimero(){
            if (ultimo == NULL)
                return;
                
            if (ultimo == primero){
                delete ultimo;
                primero = ultimo = NULL;
             }else{
                NodoEstudiante *aux;
                aux = primero->getVecino();
                delete primero;
                primero = aux;
             }

        }
};
