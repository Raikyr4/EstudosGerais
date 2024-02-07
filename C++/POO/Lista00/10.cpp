#include <iostream>
#include <random>
using namespace std;

class ProfessorDeMultiplicacao
{
protected:
    int GeraNumero()
    {
        return (rand() % 10) + 1;
    }

    void RepetirOuNAo(int N1, int N2)
    {
        char s;
        cout << "Quer Tentar a mesma questao ? Digite S/ N : ";
        cin >> s;
        if (s == 'S' || s == 's')
        {
            int Re;
            cout << "Quanto eh : " << N1 << "x" << N2 << " ?" << endl;
            cin >> Re;
            IsTrue(N1, N2, Re);
            RepetirOuNAo(N1, N2);
        }

        return;
    }

    // Foi Feita uma alteração na função IsTrue para realizar o objetivo do exercício
    bool IsTrue(int N1, int N2, int R)
    {
        if (R == N1 * N2)
        {
            switch ((rand() % 4) + 1)
            {
            case 1:
                cout << "Muito Bem !" << endl;
                break;
            case 2:
                cout << "Exelente ! " << endl;
                break;
            case 3:
                cout << "Bom Trabalho !" << endl;
                break;
            case 4:
                cout << "Mantenha um bom Trabalho !" << endl;
                break;
            default:
                break;
            }
            return true;
        }

        switch ((rand() % 4) + 1)
        {
        case 1:
            cout << "Nao. Por favor tente de novo ! " << endl;
            break;
        case 2:
            cout << "Errado. Tente mais uma vez." << endl;
            break;
        case 3:
            cout << "Nao desista !" << endl;
            break;
        case 4:
            cout << "Nao , continue tentando !" << endl;
            break;
        default:
            break;
        }
        return false;
    }

    bool ContinuaOuNao()
    {
        char s;
        cout << "Quer continuar tentando outras questoes ? Digite S / N" << endl;
        cin >> s;
        if (s == 'S' || s == 's')
        {
            return true;
        }

        return false;
    }

public:
    void ComecaAula()
    {

        while (true)
        { // Gera um número aleatório seguro
            int Numero1 = GeraNumero();
            int Numero2 = GeraNumero();
            int Resposta;
            cout << "Quanto eh : " << Numero1 << "x" << Numero2 << " ?" << endl;

            cin >> Resposta;

            if (!IsTrue(Numero1, Numero2, Resposta))
            {
                RepetirOuNAo(Numero1, Numero2);
            }

            bool flag = ContinuaOuNao();
            if (!flag)
                break;
        }

        cout << "A Aula acabou. Obrigado Pela participacao, ate a proxima !" << endl;
        return;
    }
};

int main()
{

    char Denovo;
    cout << endl
         << "Quer participar de uma aula de multiplicacao ? S / N" << endl;
    while (cin >> Denovo && (Denovo == 'S' || Denovo == 's'))
    {

        ProfessorDeMultiplicacao Raiky;
        cout << "Bem vindo a aula de Multiplicao! " << endl;

        Raiky.ComecaAula();

        cout << endl;
        cout << "Quer participar de uma OUTRA aula de multiplicacao ? S / N" << endl;
    }
}