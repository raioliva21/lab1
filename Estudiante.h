#include<iostream>
#include<string>
using namespace std;

class Estudiante{
    private: 
        string nombre;
        int edad;

    public:
        Estudiante(string nombre, int edad){
            this->nombre = nombre;
            this->edad = edad;
        }

        Estudiante(){
            this->nombre = "";
            this->edad = 0;
        }

        string getNombre(){
            return nombre;
        }

        void setNombre(string nombre){
            this->nombre = nombre;
        }   

        int getEdad(){
            return edad;
        }

        void setEdad(int edad){
            this->edad = edad;
        }
};