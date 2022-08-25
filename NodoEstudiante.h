#include<iostream>
#include<string>
#include"ejemplo/Estudiante.h"

using namespace std;

class NodoEstudiante{
    private:
        Estudiante valor;
        NodoEstudiante *vecino;

    public:
        NodoEstudiante(){
            this->vecino = NULL;
        }

        NodoEstudiante(Estudiante nuevo){
            this->valor.setNombre(nuevo.getNombre());
            this->valor.setEdad(nuevo.getEdad());

            this->vecino = NULL;
        }

        void setVecino(NodoEstudiante *vec){
            this->vecino = vec;
        }
                
        NodoEstudiante *getVecino(){
            return(this->vecino);
        }

        Estudiante *getEstudiante(){
            return(&this->valor);
        }

};
