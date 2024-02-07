#include <iostream>
using namespace std;
class Elevador
{
private:
    int AndarAtual;
    int TotalAndares;
    float Capacidade;
    int Pessoas;

public:
    Elevador(int TotalAndares, float Capacidade);

    void set_AndarAtual(int A)
    {
        if (A >= 0)
        {
            AndarAtual = A;
        }
        else
        {
            cout << "ERROR" << endl;
        }
    }
    void set_TotalAndares(int T)
    {
        if (T > 0)
        {
            TotalAndares = T;
        }
        else
        {
            cout << "ERROR" << endl;
        }
    }
    void set_Capacidade(int C)
    {
        if (C > 0)
        {
            Capacidade = C;
        }
        else
        {
            cout << "ERROR" << endl;
        }
    }
    void set_Pessoas(int P)
    {
        if (P < Capacidade)
        {
            Pessoas += P;
        }
        else
        {
            cout << "OverFlow" << endl;
        }
    }
    string get_AndarAtual()
    {
        return (AndarAtual != 0) ? to_string(AndarAtual) : "Terreo";
    }
    float get_Capacidade()
    {
        return Capacidade;
    }
    int get_TotalAndares()
    {
        return TotalAndares;
    }
    int get_Pessoas()
    {
        return Pessoas;
    }

    void out_Pessoas(int P1)
    {
        if (Pessoas > 0)
        {
            Pessoas -= P1;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }
    void up(int A)
    {
        if (AndarAtual != TotalAndares && A > 0)
        {
            AndarAtual += A;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }
    void dawn(int A2)
    {
        if (AndarAtual != 0 && A2 > 0)
        {
            AndarAtual -= A2;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }
};
Elevador::Elevador(int TotalAndares, float Capacidade)
{
    AndarAtual = 0;
    this->Capacidade = Capacidade;
    this->TotalAndares = TotalAndares;
    Pessoas = 0;
}

int main()
{
    Elevador P(10, 5);
    P.up(2);
    P.set_Pessoas(3);
    P.dawn(1);
    P.out_Pessoas(2);
    cout << P.get_Pessoas() << endl;
    cout << P.get_AndarAtual() << "\n";
    P.set_Pessoas(6);
    cout << P.get_TotalAndares() << endl;
    cout << P.get_Capacidade() << endl;
    P.set_AndarAtual(0);
    cout << P.get_AndarAtual() << endl;
    P.set_AndarAtual(-1);
}