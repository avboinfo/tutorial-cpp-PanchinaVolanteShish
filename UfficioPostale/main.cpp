/*
*Enrico Salvioli-3CIN
*06/04/2024
*Esercizio 16 A
*/

#include <iostream>
using namespace std;
#include "Coda.cpp"

int main(){

Coda c= Coda(1000);
c.stampa();
c.enter(100);
c.enter(120);
c.enter(85);
c.exit();
c.enter(235);
c.stampa();

}