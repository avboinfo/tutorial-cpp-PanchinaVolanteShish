/*
*Enrico Salvioli-3CIN
*06/04/2024
*Esercizio 16 A
*/

#include <iostream>
using namespace std;
#include <string>


class Coda{
    private: // modificatori di visibilità, Information hiding(incapsulamento), una delle 3 caratteristiche principali delle classi 
    int len;
    int *v;
    int start;
    int stop;
    string nome;
    public:
    Coda(string nome,int len){
        this->nome=nome;
        this->len= len;
        v = new int[len];
        start = stop = 0;

    }

    void enter(int val){
        if(stop>=len){cout<<"Coda piena!";return;}
         v[stop] = val;
         cout<<"Entra il numero "<<val<<endl;
         stop++;
    }

    int exit(){
        if(start>=stop){
            cout<<"Coda vuota"<<endl;return 0;
            
        }
        int val=v[start];
        cout<<"Esce il numero "<<val<<endl;
        start=start++;
        return val;
    }
    void stampa(){
        cout<<"Elementi in coda "<< nome <<": "<<endl;
        for(int i=0; i<stop;i++){
            cout<<v[i]<<endl;
            cout<<endl;
        }
         cout<<endl;
    }
};