#include <iostream>
#include <random>
#include<vector>
#include "L02Ex15.cpp"
using namespace std;

class Lampada
{
protected:
    string esgtadoDaLampada;
    int watts;
    Contador VezesDeLuzAcesa;
    // Pode ser usado string ou booleano para representar o estado Da Lampada

public:
    Lampada()
    {
        
        watts = (rand() % 40 ) + 10 ;
    }

    void Acende()
    {
        esgtadoDaLampada = "aceso";
        VezesDeLuzAcesa.incrementar();
    }

    void Apaga()
    {
        esgtadoDaLampada = "apagado";
    }

    void MostraEstado()
    {
        if (esgtadoDaLampada == "aceso")
            cout << "LIGADA " << endl;
        else
            cout << "DESLIGADA " << endl;
    }

    bool EstaLigada()
    {
        if (esgtadoDaLampada == "aceso")
            return true;
        
        return false;
    }

    bool Economia()
    {
        if(watts >= 40)
            return true;
        
        return false;
    }

    void VezesLigada()
    {
        VezesDeLuzAcesa.imprimirValor();
    }

};

int main()
{
    vector <Lampada> Lista;

    for(int i =0 ; i<10; i ++)
    {
        Lampada P;
        Lista.push_back(P);
    }
    Lista[5].Acende();
    Lista[4].Acende();
    for(int i =0 ; i<10; i ++)
    {
        Lista[i].MostraEstado();
        cout<<" EH ECONOMICA : ";
        if(Lista[i].Economia())
        {
            cout<<" sim "<<endl;
        }
        else{
         cout<<" nao "<<endl;
        }
    }
}