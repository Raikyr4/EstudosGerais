//código esta incompleto


#include <iostream>
#include <vector>
using namespace std;

struct Basquete
{
    int perdasDeBola;
    int rebotesPegos;
    string nomeDoMelhorDe3;
    int numeroDoMelhor;
};

struct Futebol
{
     int numeroDeEmpates;
     int Gols;
     int GolsContra;
     string NomeDoGoleador;
     int GolsDoGoleador;
};

struct Modalidade
{
    Basquete basquete;
    Futebol futebol;
};

struct Equipe
{
    string nome;
    int vitorias;
    int derrotas;
    Modalidade modalidade;
};

void ImprimeMenu()
{
    system("cls");
    cout << "       ###############################################" << endl;
    cout << "       ##                                           ##" << endl;
    cout << "       ##      [Selecione uma operacao]             ##" << endl;
    cout << "       ##                                           ##" << endl;
    cout << "       ##   1  - INSERIR EQUIPE                     ##" << endl;
    cout << "       ##   2  - PESQUISAR LIVRO                    ##" << endl;
    cout << "       ##   3  - VER INVERNTARIO                    ##" << endl;
    cout << "       ##   4  - SAIR                               ##" << endl;
    cout << "       ###############################################" << endl;
    cout << endl;
    cout << "Digite a opcao: ";
}

int main()
{
    
    int opcao;
    bool sistemaAtivo = true;
    ImprimeMenu();
    while (sistemaAtivo)
    {
        cin >> opcao;
        cin.ignore();
        switch (opcao)
        {
        case 1:

            break;
        case 2:
        
            break;
        case 3:
        
            break;
        case 4:
            sistemaAtivo = false;
            break;
        default:
            break;
        }
        ImprimeMenu();
    }
    return 0;
    
}