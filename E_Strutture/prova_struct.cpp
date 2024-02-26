/*
** prova_struct.cpp
** Author: IAV 3CIN
** 28/02/2021
*/

#include <iostream>

using namespace std;

/* Il tipo di dato "struct" serve per memorizzare dati di tipi uguali o diversi
** nella stessa struttura, per poter accedere a ciascuno dei membri 
** attraverso il nome unico della struttura.
*/

struct persona
{
    string nome;
    int eta;
};


int main()
{
  struct persona gigi,gigetto,gigettino;

  gigi.nome="Jhonny";
  gigi.eta=60;
  gigetto.nome="Brad";
  gigetto.eta=60;
  gigettino.nome="Leonardo";
  gigettino.eta=49;
 cout<<"Gigi si chiama "<< gigi.nome<<" ed ha "<< gigi.eta<<" anni"<<endl;
 cout<<"Gigetto si chiama "<<gigetto.nome<<" ed ha "<<gigetto.eta<<" anni"<<endl;
 cout<<"Gigettino si chiama "<< gigettino.nome<<" ed ha "<< gigettino.eta<<" anni"<<endl;
  return 0;
}
