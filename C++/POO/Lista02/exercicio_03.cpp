#include <iostream>
using namespace std;
class Voo
{
private:
    int Capacidade[100];
    int Acentos[101];
    int NumeroDoVoo;
    string HoraPartida;
    string data;
    int Ca;

public:
    Voo(int N);

    bool set_Capacidade(int C)
    {
        if (C > 0 && C <= 100)
        {
            for (int i = 0; i < 100; i++)
            {
                Capacidade[i] = 0;
            }
            for (int i = 0; i < 100; i++)
            {
                Acentos[i] = 0;
            }

            for (int i = 0; i < C; i++)
            {
                Capacidade[i] = 1;
                Acentos[i + 1] = 1;
            }
            int soma = 0;
            for (int i = 0; i < 100; i++)
            {
                if (Capacidade[i] == 1)
                {
                    soma++;
                }
            }
            Ca = soma;
            return true;
        }
        return false;
    }
    bool set_NumeroVOO(int N)
    {
        if (N > 0)
        {
            NumeroDoVoo = N;
            return true;
        }
        return false;
    }
    bool set_Hora(string H)
    {
       
            HoraPartida = H;
        
    }
    bool set_Data(string D)
    {
         data=D;
    }

    bool ocupa(int Ac)
    {
        if (Ac > 0 && Ac <= 100)
        {
            for (int i = 1; i < 101; i++)
            {
                if (i == Ac)
                {
                    if (Acentos[i] == 1)
                    {
                        Acentos[i] = 0;
                        return true;
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
        return false;
    }
    int get_Capacidade()
    {
        return Ca;
    }
    int get_numeroVOO()
    {
        return NumeroDoVoo;
    }
    string get_hora()
    {
        return HoraPartida;
    }
    string get_data()
    {
        return data;
    }
    string get_dados()
    {

        return "CAPACIDADE : " + to_string(Ca) + " Acentos\n" + "HORA DE PARTIDA E DATA : " + HoraPartida + " " + data;
    }
    int vagas()
    {
        int soma = 0;
        for (int i = 0; i < 100; i++)
        {
            if (Acentos[i + 1] == 1)
            {
                soma++;
            }
        }
        return soma;
    }
    bool verifica(int Ac)
    {
        if (Ac > 0 && Ac <= 100)
        {
            if (Acentos[Ac] == 0)
            {
                return true;
            }
            return false;
        }
        return false;
    }
};
Voo::Voo(int N)
{
    if (N > 0)
    {
        NumeroDoVoo = N;
    }
}

int main()
{
    Voo X(900);
    X.set_Capacidade(100);
    X.set_Data("11/09/2003");
    X.set_Hora("15:30");
    cout << X.get_dados() << endl;
    X.ocupa(50);
   cout<< X.vagas()<<endl;
   cout<<X.verifica(50);
}