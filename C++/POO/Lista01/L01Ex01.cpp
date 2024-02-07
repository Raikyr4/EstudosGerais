#include <iostream>
#include <random>
#include <iomanip>

//define a quantidade clientes a serem lidos no programa
#define cont 1

using namespace std;

struct Cliente
{
    string nome;
    int quantidadeDeProduto;
    float preco;
    int statusDoPedido;
};

enum Status
{
    PROCESSAMENTO,
    PAGO,
    ATRASADO
};

string VerificaStatus(int number)
{
    if (number == PROCESSAMENTO)
        return " EM PROCESSAMENTO ";
    if (number == PAGO)
        return " PAGO ";
    if (number == ATRASADO)
        return " ATRASADO ";
}

void VerInfo(Cliente *L)
{
    for (int i = 0, j = 1; i < cont; i++, j++)
    {
        cout<<fixed<<setprecision(2);
        cout << "Cliente " << j << " : { NOME => " << L[i].nome << " , QUANTIA => " << L[i].quantidadeDeProduto << " PRECO => R$ " << L[i].preco << " , STATUS DO PEDIDO => " << VerificaStatus(L[i].statusDoPedido) << " }" << endl << endl;
    }
}

int main()
{
    Cliente listaDeClientes[cont];
    cout<<endl<<endl;
    for (int i = 0; i < cont; i++)
    {

        cout << "Digite seu nome : ";
        cin >> listaDeClientes[i].nome;
        cout << "Digite a Quantidade de Produtos que vc quer : ";
        cin >> listaDeClientes[i].quantidadeDeProduto;
        cout << endl;

        cout << "Digite o Valor a se pago pelo produto : ";
        cin >> listaDeClientes[i].preco;

        listaDeClientes[i].statusDoPedido = (rand() % 3);

        cin.ignore();
        system("cls");
    }

    VerInfo(listaDeClientes);
}