#include <iostream>
#include <string>
using namespace std;
class Carro
{
private:
    string Placa;
    string Modelo;
    int Ano;
    float Km;
    float Combustivel;
public:
    Carro(int ano, string Modelo, string Placa);
    void abastecer(float C)
    {
        if(C<=50.0)
        {
            Combustivel=C;
        }
        else
        {
            cout<<"Tanque oveflow"<<endl;
        }
    }
    void moveKm(float X)
    {
        Km=X;
        Combustivel=Combustivel - Km/15;
        if(Combustivel==0)
        {
            cout<<"Combustivel esgotado!"<<endl;
        }
    }
    string get_dados()
    {
        return "Total Percorrido em KM "+to_string(Km)+"\n"+"Total de combustivel em  L "+to_string(Combustivel)+"\n";
    }

    
};

Carro::Carro(int ano,string Modelo, string Placa)
{
    Combustivel=0.0;
    Km=0.0;
    if(Modelo.size()<=10 || Placa.size()==6)
    {
         this -> Modelo=Modelo;
         this -> Placa=Placa;
    }
    else
    {
        cout<<"Placa ou Modelo incompativel"<<endl;
    }
    if(ano>1850)
    {
        Ano=ano;
    }
    else
    {
        cout<<"ANO inexistente"<<endl;
    }
   
}

int main()
{
    Carro P1(2022,"HRV","PHP2030");
    Carro P2(2010,"UNO","OlA8029");
    P1.abastecer(50);
    P2.abastecer(50);
    P1.moveKm(200);
    P2.moveKm(400);
    cout<<P1.get_dados()<<endl;
    cout<<P2.get_dados()<<endl;

}
