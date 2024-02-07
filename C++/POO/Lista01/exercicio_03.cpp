#include <iostream>
#include <string>
using namespace std;
class Relogio
{
private:
    int Hora;
    int Minutos;
    int Segundos;

public:
    
    Relogio();
    void set_horario(int H, int M, int S)
    {
        if (H < 23 && H > -1)
        {
            Hora = H;
        }
        else
        {
            cout << "HORA INVALIDA" << endl;
        }
        if (M < 60 && M > -1)
        {
            Minutos = M;
        }
        else
        {
            cout << "MINUTOS INVALIDO" << endl;
        }
        if (Segundos < 60 && Segundos > -1)
        {
            Segundos = S;
        }
        else
        {
            cout << "SEGUNDOS INVALIDOS" << endl;
        }
    }
    string get_horario()
    {
        if (Hora < 10 && Minutos < 10 && Segundos < 10)
        {
            return "0" + to_string(Hora) + ":0" + to_string(Minutos) + ":0" + to_string(Segundos);
        }
        else
        {
            if (Hora >= 10 && Minutos >= 10 && Segundos >= 10)
            {
                return to_string(Hora) + ":" + to_string(Minutos) + ":" + to_string(Segundos);
            }
            else
            {
                if (Hora >= 10 && Minutos >= 10 && Segundos < 10)
                {
                    return to_string(Hora) + ":" + to_string(Minutos) + ":0" + to_string(Segundos);
                }
                else
                {
                    if (Hora >= 10 && Minutos < 10 && Segundos < 10)
                    {
                        return to_string(Hora) + ":0" + to_string(Minutos) + ":0" + to_string(Segundos);
                    }
                    else
                    {
                        if (Hora < 10 && Minutos >= 10 && Segundos < 10)
                        {
                            return "0" + to_string(Hora) + ":" + to_string(Minutos) + ":0" + to_string(Segundos);
                        }
                        else
                        {
                            if (Hora < 10 && Minutos < 10 && Segundos >= 10)
                            {
                                return "0" + to_string(Hora) + ":0" + to_string(Minutos) + ":" + to_string(Segundos);
                            }
                            else
                            {
                                if (Hora >= 10 && Minutos < 10 && Segundos >= 10)
                                {
                                    return to_string(Hora) + ":0" + to_string(Minutos) + ":" + to_string(Segundos);
                                }
                                else
                                {
                                    return "0" + to_string(Hora) + ":" + to_string(Minutos) + ":" + to_string(Segundos);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    void avanca(int X)
    {
        int T;
        T = X;
        Segundos = Segundos + T % 60;
        T = T / 60;
        Minutos = Minutos + T % 60;
        T = T / 60;
        Hora = Hora + T;
        T = X;
        if (Segundos > 59)
        {
            Segundos = 0;
            T = T / 60;
            Minutos = Minutos + T % 60;
        }

        if (Minutos > 59)
        {

            Minutos = 0;
            T = T /60;
            Hora = Hora + T;
        }
        
        if (Hora > 23)
        {

            Hora = 0;
            T=X;
            if (Segundos > 59)
            {
                Segundos = 0;
                T = T / 60;
                Minutos = Minutos + T % 60;
            }

            if (Minutos > 59)
            {

                Minutos = 0;
                T = T / 60;
                Hora = Hora + T;
            }
        }
    }
};

Relogio ::Relogio()
{
    Hora = 0;
    Minutos = 0;
    Segundos = 0;
}

int main()
{
    Relogio R;
    R.avanca(3661*24);
    R.avanca(3600*3+600+1560);


  
    cout << R.get_horario() << endl;
}