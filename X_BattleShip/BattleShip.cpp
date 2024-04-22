


#include <iostream>
using namespace std;
#include "BattleField.cpp"
class BattleShip{
    private:
    BattleField mappa;
    BattleField campo;
    public:
    BattleShip(){
    mappa= BattleField(VOID);
    campo=BattleField(VOID);

    campo.placeVerticalShip(4);

    campo.placeHorizontalShip(5);
    }
    void play(){
        while (!gameOver()){
            mappa.stampa();
            if (!playHand());
            break;
        }
        campo.stampa();
    }
    bool playHand(){
        cout<<"Inserisci le coordinate di riga e colonna(1 - "<<DIM<<" )in cui sganciare la bomba (0 per terminare)";
            int x, y;
            cin>>x; if(x<=0 || x>DIM) return false; else x--;
            cin>>y; if(y<=0 || y>DIM) return false; else y--;
        if (campo.get(x,y)==SHIP) {mappa.put(x,y,HIT); campo.put(x,y,HIT);}
        else mappa.put(x,y,MISS);
        return true;
    
    }
    bool gameOver(){
        for(int i=0;i<DIM;i++){
            for(int j=0;j<DIM;i++){
                if(mappa.get(i,j)=="X")
                return false;
                else
                return true;
            }
        }
    }

};

