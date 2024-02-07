#include <iostream>
using namespace std;
class Ar_Condicionado
{
    private:
        float X;//Temperatura Ambiente Inicio
        float Temperatura;
        int Nivel;
    public:
        Ar_Condicionado(float x);
        void aumenta_diminui(char M)
        {
            if(M=='+')
            {
                if(Nivel>0)
                {
                    Nivel--;
                }
                else
                {
                    cout<<"ERROR"<<endl;
                }
               
               
            }
            else
            {
                if(M=='-')
                {
                  Nivel++;
                }
            }
        }
        string get_dados()
        {
            Temperatura=X-Nivel*1.8;
            return "TEMPERATURA AMBIENTE ATUAL: "+to_string(Temperatura)+"\n"+"NIVEL DO AR : "+to_string(Nivel);
        }

};

Ar_Condicionado::Ar_Condicionado(float X)
{
    Nivel=0;
    this->X=X;
}

int main()
{
    Ar_Condicionado P(25.0);
    Ar_Condicionado P2(31.0);
    for(int i=0;i<5;i++)
    {
        P.aumenta_diminui('-');
    }
    for(int i=0;i<10;i++)
    {
        P2.aumenta_diminui('-');
    }
    cout<<P.get_dados()<<endl;
    cout<<P2.get_dados()<<endl;

} 
