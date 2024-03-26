/*
Enrico Salvioli-3CIN
Es 14 pag A257
26/03/2024
*/
using namespace std;
#include <iostream>
int ricorsiva(char s[],char c, int i,int counter)
{
    if(s[i]!='/0'){
    if(s[i]==c){
        counter++;
      
    }
    else
    i++;
    ricorsiva(s,c,i,counter);
    }
    else 
    return counter;
    
}
int main()
{
    int i=0;
    int counter=0;
    char s[]="Quante volte c'è questa lettera";
    char c='c';
    int ris=ricorsiva(s,c,i,counter);
    cout<<ris;
    return 0;
}