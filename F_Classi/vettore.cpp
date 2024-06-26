/*
Lezione del 04/03/2024
Enrico Salvioli-Classe vettore di interi
3CIN
*/
#include <iostream>
using namespace std;

class Vettore{
    private: // modificatori di visibilità, Information hiding(incapsulamento), una delle 3 caratteristiche principali delle classi 
    int dim;
    int len;
    int *v;
    int delta;
    public:
     Vettore(int dim, int delta){
        this->dim= dim;
        this->delta=delta;
        len = 0;
        v = new int[dim];
    }

    void add(int n){
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
    int getElement(int index){
        
        
        return v[index];
    }

    void setElement(int index, int newvalue){
        v[index]=newvalue;
    }

    void print(){
        cout<<"Contenuto del vettore"<<endl;
        for(int i=0;i<len;i++)
        
        {
        
        cout<<v[i]<<" ";
        
        }
        cout<<endl;
    }
};

int main(int argc, char const *argv[])
{
    Vettore vett(10,2);
    for (int i=0; i<100;i++) vett.add(i);
    vett.setElement(10,333);
    cout<<"Il valore che hai cambiato alla posizione<<  è "<<vett.getElement(10)<<endl;
    vett.print();
    return 0;
}
