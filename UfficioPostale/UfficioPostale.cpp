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
    public:
    string nome;

    Coda cR = Coda("Ricezione",1000);
    Coda cF = Coda("Spedizione",1000);
    Coda cS = Coda("Finanziari",1000);

    int nR=1, nS=1, nF=1;
    
    UfficioPostale(string nome){
        this-> nome=nome;
    }  
    void nuovoCliente( char servizio ){
        switch(servizio){
            case 'r':
                cR.enter(nR++);
                break;
            case 's':
                cS.enter(nS++);
                break;

            case 'f':
                cF.enter(nF++);
                break;
                default:
                    cout<<"Questo servizio fattelo da solo!!!!!!"<<endl;
        }
            
    }     
    void chiamaCliente(char servizio)
    {
            switch(servizio){
            case 'r':
                cR.exit();
                break;
            case 's':
                cS.exit();
                break;
            case 'f':
                cF.exit();
                break;
                default:
                    cout<<"Questo servizio non è previsto "<<endl;
            }
    }
    void stampaTabellone(){
        cout<<"Tabellone dell'Ufficio postale"<<nome<<endl;
        cR.stampa();
        cF.stampa();
        cS.stampa();
    }

};