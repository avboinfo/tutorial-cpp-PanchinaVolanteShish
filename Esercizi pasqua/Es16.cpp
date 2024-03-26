/*
Enrico Salvioli-3CIN
Es 16 pag A257
26/03/2024
*/
using namespace std;
#include <iostream>
int massimo(int v[], int i,int max) {
   
    if (v[i] != 0) {
        if (v[i] > max) {
            max = v[i];
        }
        massimo(v, i + 1,max);
    } else {
        return max; 
    }
}
int main()
{
    int v[] = {1, 2, 3, 4, 5};
    int max = massimo(v, 0,0);
    cout << "Il massimo valore dell'array è: " << max << endl;
}