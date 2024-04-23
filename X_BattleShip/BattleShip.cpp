/*
*Enrico Salvioli
*BattleShip
*/
#include <iostream>
#include "BattleField.cpp"

using namespace std;

// DIM, SHIP, MISS, HIT, VOID

class BattleShip {

    private:

    BattleField mappa;
    BattleField campo;

    public:
    BattleShip() {
        mappa = BattleField(VOID);
        campo = BattleField(VOID);
        campo.placeHorizontalShip(3);
        campo.placeVerticalShip(4);
        campo.placeVerticalShip(2);
        campo.placeHorizontalShip(5);
    }

    void play() {
        while ( ! gameOver() ) {
            mappa.stampa();
            if (!playHand()) break;
        }
        campo.stampa();
    }

    bool playHand() {
        cout << "Inserisci le coordinate di riga e colonna (1 - " << DIM << ") in cui sganciare la bomba (0 per terminare): ";
        int x, y;
        cin >> x; if (x<=0 || x>DIM) return false; else x--;
        cin >> y; if (y<=0 || y>DIM) return false; else y--;
        if (campo.get(x,y)==SHIP) {
            cout<<"Colpito"<<endl;
            mappa.put(x,y,HIT);
            campo.put(x,y,HIT);
        } else{ mappa.put(x,y,MISS); cout<<"mancato, ritenta sarai più fortunato"}
        return true;
    }

    bool gameOver() {
        for (int i=0; i<DIM; i++) 
          for (int j=0; j<DIM; j++)
            if (campo.get(i,j)==SHIP) return false;
        return true;
    }

};

