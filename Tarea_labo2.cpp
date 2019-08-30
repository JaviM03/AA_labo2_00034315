// Example program
#include <iostream>
#include <string>
using namespace std;



struct Nodo {
   string dato;
   Nodo *sig;
   
}*inicio;

class Pila{
    public:
    
    Nodo* crearNodo(int valor){
        Nodo *n = new Nodo;
        n->dato= valor;
        n->sig = nullptr;
        return n;
        }
    void push( int valor){
        string cadena="";
        cadena=to_string(valor);
        for(int i=0;i<cadena.size();i++){
        Nodo *n = crearNodo(cadena[i]);
        
        n->sig=inicio;
        inicio=n;
        }
        }
    void pop(){
        Nodo *temp = inicio;
        inicio = inicio->sig;
        free(temp);
        }
        
    void mostrarPila(){
    Nodo *temp = inicio;
    if(!inicio)
        cout<<"Pila vacia"<<endl;
    else
        while(temp){
            cout<<temp->dato<<", ";
            temp = temp -> sig;
            
            }
    }
    Pila(){
        inicio = nullptr;
        }
    
    };


int main()
{
    Pila pila;
  // string cadena="15";
 // for ( int i =0; i<cadena.size();i++)
  //{
     pila.push(1535);
    // cout<<endl;
      //}

//pila.push(10);
pila.mostrarPila();
pila.pop();
cout<<endl;
pila.mostrarPila();
}
