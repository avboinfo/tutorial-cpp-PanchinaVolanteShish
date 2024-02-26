/*
** Bicicletta.cpp
*/

#include <iostream>
using namespace std;

class Bicicletta {
  public:
    int raggio;
    string colore;
    Bicicletta() {
        raggio=10;
        colore="Nebbia Crepuscolare";
    }
    Bicicletta(int r, string c) {
        raggio=r;
        colore=c;
    }
    void presentati() {
        cout << "Buongiorno, sono una bici di colore " << colore << " e con le ruote " << raggio << "!" << endl;
    }
};

int main()
{
    Bicicletta x;
    Bicicletta y(14,"Rosso");
    y.presentati();
    x.presentati();
    

    return 0;
}
