#include <iostream>
#include <random>
#include <iomanip>

// define a quantidade clientes a serem lidos no programa
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
        cout << fixed << setprecision(2);
        cout << "Cliente " << j << " : { NOME => " << L[i].nome << " , QUANTIA => " << L[i].quantidadeDeProduto << " , PRECO => R$ " << L[i].preco << " , STATUS DO PEDIDO => " << VerificaStatus(L[i].statusDoPedido) << " }" << endl
             << endl;
    }
}

void VerificarFatura(Cliente *X)
{
    for (int i = 0; i < cont; i++)
    {
        if (X[i].statusDoPedido == PROCESSAMENTO)
        {
            cout << "Fatura : "
                 << " EM PROCESSAMENTO " << endl;
            cout << fixed << setprecision(2);
            cout << "Valor a ser pago : R$ " << X[i].preco * X[i].quantidadeDeProduto << endl;
        }

        if (X[i].statusDoPedido == PAGO)
        {
            cout << "Fatura : "
                 << " PAGA COM SUCESSO " << endl;
        }
        if (X[i].statusDoPedido == ATRASADO)
        {
            cout << "Fatura : "
                 << " EM ATRASO !  " << endl;
            cout << fixed << setprecision(2);
            cout << "Valor a ser pago : R$ " << X[i].preco * X[i].quantidadeDeProduto << " + Juros de 10% =  R$ " << ((X[i].preco * X[i].quantidadeDeProduto) * 1.1) << endl;
        }
    }
}

void VerFaturaAbaixoDeX(int valor, Cliente *Lista)
{
    bool existe = false;
    for (int i = 0, j = 1; i < cont; i++, j++)
    {
        if ((Lista[i].preco * Lista[i].quantidadeDeProduto) < valor)
        {
            if (Lista[i].statusDoPedido == ATRASADO)
            {
                if (((Lista[i].preco * Lista[i].quantidadeDeProduto) * 1.1) < valor)
                {
                    existe = true;
                    cout << fixed << setprecision(2);

                    cout << "Cliente " << j << " => FATURA : R$ " << ((Lista[i].preco * Lista[i].quantidadeDeProduto) * 1.1) << endl;
                }
            }
            else
            {
                existe = true;
                cout << fixed << setprecision(2);

                cout << "Cliente " << j << " => FATURA : R$ " << Lista[i].preco * Lista[i].quantidadeDeProduto << endl;
            }
        }
    }
    if (!existe)
    {
        cout << fixed << setprecision(2);
        cout << "Nao exisite faturas Abaixo de R$ " << valor << endl;
    }
}

void VerFaturaAcimaDeX(int valor, Cliente *Lista)
{
    bool existe = false;
    for (int i = 0, j = 1; i < cont; i++, j++)
    {
        if ((Lista[i].preco * Lista[i].quantidadeDeProduto) > valor)
        {
            if (Lista[i].statusDoPedido == ATRASADO)
            {
                existe = true;
                cout << fixed << setprecision(2);

                cout << "Cliente " << j << " => FATURA : R$ " << ((Lista[i].preco * Lista[i].quantidadeDeProduto) * 1.1) << endl;
            }
            else
            {
                existe = true;
                cout << fixed << setprecision(2);

                cout << "Cliente " << j << " => FATURA : R$ " << Lista[i].preco * Lista[i].quantidadeDeProduto << endl;
            }
        }
    }
    if (!existe)
    {
        cout << fixed << setprecision(2);
        cout << "Nao exisite faturas Abaixo de R$ " << valor << endl;
    }
}

void ImprimeMenu()
{
    system("cls");
    cout << "       ###############################################" << endl;
    cout << "       ##                                           ##" << endl;
    cout << "       ##      [Selecione uma operacao]             ##" << endl;
    cout << "       ##                                           ##" << endl;
    cout << "       ##   1  - INSERIR DADOS DE CLIENTES          ##" << endl;
    cout << "       ##   2  - VER INFORMACOES                    ##" << endl;
    cout << "       ##   3  - VER SITUACAO DAS FATURAS           ##" << endl;
    cout << "       ##   4  - VER FATURAS ACIMA DE X R$          ##" << endl;
    cout << "       ##   5  - VER FATURAS ABAIXO DE X R$         ##" << endl;
    cout << "       ##   6  - SAIR                               ##" << endl;
    cout << "       ###############################################" << endl;
    cout << endl;
    cout << "Digite a opcao: ";
}

int main()
{
    Cliente listaDeClientes[cont];
    bool sistemaAtivo = true;
    int numeroDeClientes = cont;
    int opcao;
    cout << endl
         << endl;

    while (sistemaAtivo)
    {
        ImprimeMenu();
        cin >> opcao;
        cin.ignore();
        switch (opcao)
        {
        case 1:
            if (numeroDeClientes == cont)
            {
                for (int i = 0; i < cont; i++, numeroDeClientes--)
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

                cout << endl;
                cout << "Tecle ENTER para continuar ..." << endl;
                cin.ignore();
                break;
            }
            else
            {
                cout << "Nao eh possivel add mais dados ..." << endl;
                cout << endl;
                cout << "Tecle ENTER para continuar ..." << endl;
                cin.ignore();
                break;
            }

        case 2:
            VerInfo(listaDeClientes);
            cout << "Tecle ENTER para continuar ..." << endl;
            cin.ignore();
            break;
        case 3:
            VerificarFatura(listaDeClientes);
            cout << "Tecle ENTER para continuar ..." << endl;
            cin.ignore();
            break;
        case 4:
            float X;
            cout << "Digite um Valor positivo maior que zero para a consulta : ";
            cin >> X;
            VerFaturaAbaixoDeX(X, listaDeClientes);
            cout << "Tecle ENTER para continuar ..." << endl;
            cin.ignore();
            break;
        case 5:
            float Y;
            cout << "Digite um Valor positivo maior que zero para a consulta : ";
            cin >> Y;
            VerFaturaAcimaDeX(Y, listaDeClientes);
            cout << "Tecle ENTER para continuar ..." << endl;
            cin.ignore();
            break;
        case 6:
            sistemaAtivo = false;
            break;
        default:
            break;
        }
    }
    return 0;
}