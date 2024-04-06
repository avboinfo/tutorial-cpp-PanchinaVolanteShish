/*
*Enrico Salvioli-3CIN
*06/04/2024
*Esercizio 16 A
*/

#include <iostream>
using namespace std;

class   Coda{
    private: // modificatori di visibilità, Information hiding(incapsulamento), una delle 3 caratteristiche principali delle classi 
    int len;
    int *v;
    int start;
    int stop;
    public:
     Coda(int len){
        this->len= len;
        v = new int[len];
        start = stop = 0;

    }

    void enter(int val){
        if(stop>=len){cout<<"Coda piena!";return;}
         v[stop] = val;
         stop++;
    }

    int exit(){
        if(start>=stop){
            cout<<"Coda vuota";return 0;
            
        }
        int val=v[start];
        start=start++;
        return val;
    }
    void stampa(){
        for(int i=0; i<stop;i++){
            cout<<"Elementi in coda:"<<endl;
            cout<<v[i]<<endl;
            cout<<"--------------"<<endl;
        }
    }
};