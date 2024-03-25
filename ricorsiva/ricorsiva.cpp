/*
Enrico Salvioli-3CIN
25/03/2024
Esercizio sulle funzioni ricorsive
*/
#include <iostream>
using namespace std;

int funzRicorsiva(int x,int y,int somma){
    
    if(x!=y)
    {
        x--; 
        somma=somma+x;
       
        funzRicorsiva(x,y,somma);
    }
    else
    
    return somma+x;
}

int main(int argc, char const *argv[])
{
    int x,y,somma;
    cout<<"Inserisci il primo numero(deve essere quello maggiore): ";
    cin>>x;
    cout<<"Inserisci il secondo numero(quello minore): ";
    cin>>y;
    somma=funzRicorsiva(x,y,0);
    cout<<somma;
    return 0;
}
