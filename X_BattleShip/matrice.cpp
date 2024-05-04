/*
Mauro Marinelli 13/04/24
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
const int DIM=10;
using namespace std;

class Matrice {
    private:
        char m[DIM][DIM];
    public:
        Matrice(char c) {
            for (int i = 0; i < DIM; i++)
            {
                for (int j = 0; j < DIM; j++)
                {
                    m[i][j]=c;
                }
                
            }
            
        }
        void stampa(){
            cout<<endl<<"---------------------------------------------------------------------------"<<endl;
            for (int i = 0; i < DIM; i++)
            {
                for (int j = 0; j < DIM; j++)
                {
                    printf(" %c",m[i][j]);
                }
                cout<<endl;
            }
            cout<<endl<<"---------------------------------------------------------------------------"<<endl;
        }
        void bomb(){
            int x=rand()%DIM;
            int y=rand()%DIM;
            m[x][y]='*';
        }
        void placeShipver(int len){
            if(len<=DIM || len>=DIM) return;
            int x=rand()%(DIM);
            int y=rand()%(DIM-len);
            for(int i=0;i<len;i++){
                m[x][y+i]='O';
            } 

        char get(int x; int y){
            return m[x][y]
        }
        }
            void placeShipor(int len){
            if(len<=DIM || len>=DIM) return;
            int x=rand()%(DIM-len);
            int y=rand()%(DIM);
            for(int i=0;i<len;i++){
                m[x+1][y]='O';
            } 


        }



};

int main(){
    srand(time(NULL));
    Matrice mappa= Matrice('-');
    Matrice campo= Matrice('-');
    //Matrice m2= Matrice();
    campo.placeShipver(3);
    campo.placeShipor(4);
    campo.placeShipver(2);
    mappa.stampa();
    campo.stampa();
    for(int i=0;i<DIM;i++)
    campo.bomb();
    campo.stampa();
    for(int i=0;i<20;i++)
    {
        int x=rand()%DIM;
        int y=rand()%DIM;
        if(campo.get)
    }

    
    
    return 0;
}