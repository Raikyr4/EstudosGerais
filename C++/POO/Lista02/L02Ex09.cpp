#include <iostream>
#include <vector>

using namespace std;

class HoraPrecisa
{
protected:
    int hora, minutos, segundo, centesimoDeSegundo;

public:
    void InicializaData(int umaHora, int umMinuto, int umSegundo, int umCentesimo)
    {
        if (HoraValiada(umaHora,umMinuto,umSegundo,umCentesimo))
        {
            hora = umaHora;
            minutos = umMinuto;
            segundo = umSegundo;
            centesimoDeSegundo = umCentesimo;
        }
        else
        {
            hora = 0;
            minutos = 0;
            segundo = 0 ;
            centesimoDeSegundo = 0;
        }
    }

    bool HoraValiada(int umaHora, int umMinuto, int umSegundo, int umCentesimo)
    {
        if ((umaHora >= 0) && (umaHora <= 23) && (umMinuto >= 1) && (umMinuto <= 59) && (umSegundo >= 0 && umSegundo <= 59) && (umCentesimo >= 0 && umCentesimo <= 999))
            return true;

        return false;
    }

    void MostraHora()
    {
        if (hora > 9)
        {
            cout << "HORA EH : " << hora << ':' << minutos << ':' << segundo << ':' << centesimoDeSegundo << " h" << endl;
        }
        else
        {
            cout << "HORA EH : 0" << hora << ':' << minutos << " h" << endl;
        }
    }
};

int main()
{
    HoraPrecisa hora;

    hora.InicializaData(10, 35, 50, 150);
    hora.MostraHora();
}