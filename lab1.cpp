 
#include <iostream>
#include <stdlib.h>
using namespace std;
 
struct nodo{
       string name;  
       struct nodo *sgte;
};
 
typedef struct nodo *Tlista;


void insertarPrimero(Tlista &lista, string nombre)
{
    Tlista q;
    q = new(struct nodo);
    q->name = nombre;
    q->sgte = lista;
    lista  = q;
}
 
void buscarEstudiante(Tlista lista, string nombre)
{
    Tlista q = lista;
    int i = 1;
    bool encontrado = false;
 
    while(q!=NULL)
    {
        if(q->name==nombre)
        {
            cout<<endl<<" Encontrada en posicion "<< i <<endl;
            encontrado = true;
        }
        q = q->sgte;
        i++;
    }
 
    if(encontrado==false)
        cout<<"\n\n Numero no encontrado..!"<< endl;
}

void mostrarlista(Tlista lista)
{
     int i = 0;
 
     while(lista != NULL)
     {
          cout <<' '<< i+1 <<") " << lista->name << endl;
          lista = lista->sgte;
          i++;
     }
}
 
void menu()
{
    cout<<"\n\t\tREGISTRO LISTA DE ESTUDIANTES\n\n";
    cout<<" 1. INGRESAR ESTUDIANTE "<<endl; 
    cout<<" 2. BUSCAR ESTUDIANTE "<<endl;
    cout<<" 3. QUITAR PRIMER ESTUDIANTE "<<endl;  
    cout<<" 4. QUITAR ULTIMO ESTUDIANTE "<<endl;   
    cout<<" 5. REPORTAR LISTA                   "<<endl;
    cout<<" 6. SALIR                            "<<endl;    
 
    cout<<"\n INGRESE OPCION: ";
}
 
 
/*                        Funcion Principal
---------------------------------------------------------------------*/
 
int main()
{
    Tlista lista = NULL;
    int op;     // opcion del menu
    string estudiante;
 
    do
    {
        menu();  cin>> op;

        if (op != 5){
            cout<<"\n Nombre estudiante: "; cin>> estudiante;
        }
 
        switch(op)
        {
            // registrar estudiante
            case 1:
                 insertarPrimero(lista, estudiante);
            break;
            // buscar estudiante por nombre
            case 2:
                 buscarEstudiante(lista, estudiante);
            break;
            //case 3:
            //    eliminarPrimerNodo(lista);
            //break;
            //case 4:
            //    eliminarUltimoNodo(lista);
            //break;
            case 5:
                 cout << "\n\n MOSTRANDO LISTA\n\n";
                 mostrarlista(lista);
            break;
                    }
 
        cout<<endl<<endl;
        system("pause");  system("cls");
 
    }while(op!=6);
 
   return 0;
}