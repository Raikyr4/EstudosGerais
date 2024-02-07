#include <iostream>
#include <vector>

using namespace std;

class HoraAproximda
{
protected:
    int hora,minutos;

public:
    void InicializaData(int umaHora, int umMinuto)
    {
        if (HoraValiada(umaHora,umMinuto))
        {
            hora = umaHora;
            minutos = umMinuto;
        }
        else
        {
            hora = 0;
            minutos = 0;
        }
    }

    bool HoraValiada(int umaHora, int umMinuto)
    {
        if ((umaHora >= 0) && (umaHora <= 23) && (umMinuto >= 1) && (umMinuto <= 59))
            return true;

        return false;
    }

    void MostraHora()
    {
        if(hora>9)
        {
                cout << "HORA EH : " << hora << ':' << minutos<<" h"<< endl;
        }
        else{
               cout << "HORA EH : 0" << hora << ':' << minutos<<" h"<< endl;
        }
    }
};

int main()
{
    HoraAproximda hora;

    hora.InicializaData(10,35);
    hora.MostraHora();
}