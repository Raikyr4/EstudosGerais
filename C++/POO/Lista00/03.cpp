#include <iostream>
#include <string>

using namespace std;

// Função para criar uma linha com comprimento desejado
string CriarLinha(int comprimento, char caractere)
{
    string linha;
    for (int i = 0; i < comprimento; ++i)
    {
        linha = (linha + ' ') + caractere;
    }
    return linha;
}

// Função para criar um triângulo
void CriarTriangulo(int tamanho, char caractere)
{
    for (int i = 1; i <= tamanho; ++i)
    {
        cout << CriarLinha(tamanho - i, ' ') << CriarLinha(2 * i - 1, caractere) << endl;
    }
}

// Função para criar um quadrado
void CriarQuadrado(int tamanho, char caractere)
{
    for (int i = 1; i <= tamanho; ++i)
    {
        cout << "          " << CriarLinha(tamanho, caractere) << endl;
    }
}

// Função para criar um losango usando a função de triângulo
void CriarLosango(int tamanho, char caractere)
{
    CriarTriangulo(tamanho, caractere);
    for (int i = tamanho - 1; i >= 1; --i)
    {
        cout << CriarLinha(tamanho - i, ' ') << CriarLinha(2 * i - 1, caractere) << endl;
    }
}

void ImprimeMenu()
{
    system("cls");
    cout << "       ###############################################" << endl;
    cout << "       ##                                           ##" << endl;
    cout << "       ##      [Selecione uma operacao]             ##" << endl;
    cout << "       ##                                           ##" << endl;
    cout << "       ##   1  - IMPRIME QUADRADO                   ##" << endl;
    cout << "       ##   2  - IMPRIME TRINAGULO                  ##" << endl;
    cout << "       ##   3  - IMPRIME LOZANGO                    ##" << endl;
    cout << "       ##   4  - SAIR                               ##" << endl;
    cout << "       ###############################################" << endl;
    cout << endl;
    cout << "Digite a opcao: ";
}

int main()
{
    int tamanho;
    char caractere;
    int forma;
    ImprimeMenu();
    while (cin >> forma)
    {
        switch (forma)
        {
        case 1:
            cout << "Digite o tamanho da forma: ";
            cin >> tamanho;
            cout << "Digite o caractere de preenchimento: ";
            cin >> caractere;
            CriarQuadrado(tamanho, caractere);
            cin.ignore();
            cout << endl
                 << " Tecle enter para continuar ... ";
            cin.ignore();
            break;
        case 2:
            cout << "Digite o tamanho da forma: ";
            cin >> tamanho;
            cout << "Digite o caractere de preenchimento: ";
            cin >> caractere;
            CriarTriangulo(tamanho, caractere);
            cin.ignore();
            cout << endl
                 << " Tecle enter para continuar ... ";
            cin.ignore();
            break;
        case 3:
            cout << "Digite o tamanho da forma: ";
            cin >> tamanho;
            cout << "Digite o caractere de preenchimento: ";
            cin >> caractere;
            cin.ignore();
            CriarLosango(tamanho, caractere);
            cout << endl
                 << " Tecle enter para continuar ... ";
            cin.ignore();
            break;
        case 4:
            return 0;
        default:
            cout << "Forma desconhecida!" << endl;
            cin.ignore();
            cout << endl
                 << " Tecle enter para continuar ... ";
            cin.ignore();
            break;
        }
        cout << endl
             << endl
             << endl;
        ImprimeMenu();
    }

    return 0;
}
