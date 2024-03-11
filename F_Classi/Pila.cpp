/*
Lezione del 11/03/2024
Enrico Salvioli-Classe vettore di interi
3CIN-Pila.cpp
*/
#include <iostream>
using namespace std;

class Pila{
    private: // modificatori di visibilità, Information hiding(incapsulamento), una delle 3 caratteristiche principali delle classi 
    int dim;
    int len;
    int *v;
    int delta;
    public:
     Pila(int dim, int delta){
        this->dim= dim;
        this->delta=delta;
        len = 0;
        v = new int[dim];
    }

    void push(int n){
        if(len==dim)
        {
            int*nuovov= new int[dim + delta];
            for(int i=0;i<dim;i++)
            {
                nuovov[i]=v[i];
            }
            dim += delta;
            delete v;
            v=nuovov;
        }

        v[len]=n;
        len++;

    }
    int pop(){
        if (len==0){ cout<<"\nErrore Pila Vuota "; return 0;}
        return v[--len];
    }
    int getElement(int index){
        
        
        return v[index];
    }

    void setElement(int index, int newvalue){
        v[index]=newvalue;
    }

    void print(){
        cout<<"Contenuto della pila"<<endl;
        for(int i=0;i<len;i++)
        
        {
        
        cout<<v[i]<<" ";
        
        }
        cout<<endl;
    }
};

int main(int argc, char const *argv[])
{
    Pila vett(10,2);

    for (int i=0; i<100;i++) vett.push(i);
    cout<<"Il valore che hai cambiato alla posizione "<<vett.getElement(10);
    vett.setElement(10,333);
    cout<<" è "<<vett.getElement(10)<<endl;
    vett.print();
    cout<<"Numeri della pila al contrario"<<endl;
    for (int i=0; i<110;i++){
        cout<<vett.pop()<<" ";
    }
    return 0;
}
