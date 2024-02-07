#include <iostream>
#include <iomanip>
using namespace std;

class ContaBancariaSimplificada
{
protected:
    string nomeDoCorrentista;
    float saldo;
    bool contaEhEspecial;

public:
    void AbreConta(string name, float deposito, bool especial)
    {
        if ((name.size() > 0 && name.size() <= 120) && deposito > 0.0)
        {
            nomeDoCorrentista = name;
            saldo = deposito;
            contaEhEspecial = especial;
            cout << "Conta Criada" << endl;
        }
        else
        {
            cout << "Falha ao criar conta! Dados errados!" << endl;
        }
    }

    void AbreContaSimples(string name)
    {
        if ((name.size() > 0 && name.size() <= 120))
        {
            nomeDoCorrentista = name;
            saldo = 0.00;
            contaEhEspecial = false;
            cout << "Conta Criada" << endl;
        }
        else
        {
            cout << "Falha ao criar conta! Dados errados!" << endl;
        }
    }

    void Depositar(float deposito)
    {
        if (deposito > 0.00)
        {
            saldo += deposito;
        }
        else
        {
            cout << "Valor incorreto" << endl;
        }
    }

    void Retira(float valor)
    {
        if (!contaEhEspecial)
        {
            if (valor > 0.00 && valor<=saldo)
            {
                saldo -= valor;
            }
            else
            {
                cout << "Valor incorreto" << endl;
            }
        }
        else
        {
            if(valor > 0.00)
            {
                saldo-=valor;
            }
            else
            {
                cout << "Valor incorreto" << endl;
            }
        }
    }

    void MostraDados()
    {
        cout<<"O nome do correntista eh : "<<nomeDoCorrentista<<endl;
        cout<<"O Saldo eh : "<<fixed<<setprecision(2)<<saldo<<endl;
        if(contaEhEspecial)cout<<"A conta eh espacial"<<endl;
        else cout<<"A conta nao eh espacial"<<endl;
    }
};

int main()
{
    ContaBancariaSimplificada conta;
    conta.AbreConta("Raiky",1500.00,1);
    conta.MostraDados();
    conta.Retira(500);
    conta.MostraDados();
}