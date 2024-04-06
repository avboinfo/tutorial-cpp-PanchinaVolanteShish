/*
*Enrico Salvioli-3CIN
*06/04/2024
*Esercizio 16 A
*/

#include <iostream>
using namespace std;
class ufficioPostale{
    public:
    int codiceCliente;
    nuovoCliente(char s,int cod)    
    {
        servizio=s;
        codiceCliente=cod;
    }       
    void servizioRichiesto()
    {
        if(servizio=="R")  ricezione();
        if(servizio=="S")  spedizione();
        if(servizio=="F")  finanziario();
    }
    void ricezione(){
        cout<<"Il cliente "<<cod<<"ha usato ricezione può andare"
    }

};

int main{

    return 0
}