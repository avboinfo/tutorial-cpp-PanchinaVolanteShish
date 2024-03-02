#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
class masterMind
{
private:
    int numeroMosse;
    std::string ultimaMossa;

    static const int DIM_GIOCATA_VALIDA = 4;
    int mossaValida[DIM_GIOCATA_VALIDA];
    int codiceSegreto[DIM_GIOCATA_VALIDA];

    bool sanificaInput()
    {
        if (DIM_GIOCATA_VALIDA != ultimaMossa.size())
            return false;

        for (int i = 0; i < ultimaMossa.size(); i++)
        {

            char c = ultimaMossa[i];

            if (c >= '0' && c <= '9')

                mossaValida[i] = c - '0';
            else if (c == '-')
                mossaValida[i] = -1;
            else
                return false;
        }
        return true;
    }

    void generaCodicesegreto()
    {
        srand(time)(NULL);
        for (int i = 0; i < DIM; i++)
        {
            codiceSegreto[i] = rand() % 10;
        }
    }

public:
    masterMind()
    {
        numeroMosse = 0;
        ultimaMossa = "";
        generaCodicesegreto();
    };
    void nuovaGiocata()
    {

        do
        {
            std::cout << numeroMosse + 1 << ": ";
            std::getline(std::cin, ultimaMossa);

        } while (!sanificaInput());

        numeroMosse++;
    }
    void riultatoMossa()
    {
        int strike;
        int ball;
        for (int i = 0; i < DIM; i++)
        {
            if (codiceSegreto[i] == mossaValida[i])
            {
                strike++; //num e pos vorretti
            }
            else if()
        }
    }
};
