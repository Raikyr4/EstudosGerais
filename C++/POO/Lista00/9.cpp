#include <iostream>
#include <random>
using namespace std;

class ProfessorDeMultiplicacao
{
protected:
    int GeraNumero()
    {
        // // Cria uma instância de std::random_device para obter entropia do sistema
        // std::random_device rd;

        // // Cria um gerador de números aleatórios seguro usando a entropia do sistema
        // std::mt19937_64 generator(rd());

        // // Cria uma distribuição uniforme entre 1 e 10
        // std::uniform_int_distribution<int> distribution(1, 10);

        // // Gera um número aleatório seguro
        // return distribution(generator);
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

    bool IsTrue(int N1, int N2, int R)
    {
        if (R == N1 * N2)
        {
            cout << "Muito Bem!" << endl;
            return true;
        }

        cout << "Nao. Por favor tente de novo ! " << endl;
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

    char deNovo;
    cout << "Quer participar de uma aula de multiplicacao ? S / N" << endl;
    while (cin >> deNovo && (deNovo == 'S' || deNovo == 's'))
    {

        ProfessorDeMultiplicacao Raiky;
        cout << "Bem vindo a aula de Multiplicao! " << endl;
        Raiky.ComecaAula();

        cout << endl;
        cout << "Quer participar de uma OUTRA aula de multiplicacao ? S / N" << endl;
    }
}