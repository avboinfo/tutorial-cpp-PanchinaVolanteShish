/*
*Enrico Salvioli-3CIN
*06/04/2024
*Esercizio 16 A
*/

#include <iostream>
using namespace std;
#include <string>
#include "Coda.cpp"
class UfficioPostale{
    private:
    string nome;
    Coda cR,cS,cF
    int nR,nS,nF
    public:
    UfficioPostale(string nome)    
    {
        codiceCliente=0;
        this->nome=nome;
        cR=Coda(Ricezione,1000);
        cF=Coda(Spedizione,1000);
        cS=Coda(Finanziari,1000);
        nR=nS=nF=100;
    }  
    void presentazione(){

    }
    void nuovoCliente( char servizio ){
        switch(servizio)
            case 'r':
                cR.enter(nR++);
                break;
            case 's':
                cS.enter(ns++);
                break;

            case 'f';
                cF.enter(nF++);
                break;
                default:
                    cout<<"Questo servizio fattelo da solo!!!!!!"<<endl;
            
    }     
    void chiamaCliente()
    {
            switch(servizio)
            case 'r':
                return cR.exit(nR++);
            case 's':
                return cS.exit(ns++);

            case 'f';
                return cF.exit(nF++);
                default:
                    cout<<"Questo servizio non è previsto "<<endl;
    }
    void stampaTabellone(){
        Cout<<"Tabellone dell'Ufficio postale"<<nome<<endl;
        cR.stampa();
        cF.stampa();
        cS.stampa();
    }

};

int main{

    return 0
}