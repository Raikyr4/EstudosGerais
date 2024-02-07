#include <iostream>
#include <string>
#include <cctype> // Para funções de manipulação de caracteres

using namespace std;

class VerificaPalindromo
{
protected:
    string Entrada;

    // Função para remover espaços, acentos e pontos da frase
    string TratandoString(string str)
    {
        string Resultado;
        for (char c : str)
        {
            if (isalnum(c))
            {
                Resultado += tolower(c);
            }
        }
        return Resultado;
    }

public:
    // Construtor
    VerificaPalindromo(string frase)
    {
        Entrada = frase;
    }

    // Função para verificar se a frase é um palíndromo
    bool IsPalindromo()
    {
        string ProcessandoEntrada = TratandoString(Entrada);
        int Left = 0;
        int Right = ProcessandoEntrada.size() - 1;

        while (Left < Right)
        {
            if (ProcessandoEntrada[Left] != ProcessandoEntrada[Right])
            {
                return false;
            }
            Left++;
            Right--;
        }
        return true;
    }
};

int main()
{
    string Entrada;
    cout << "Digite uma frase: ";

    while (getline(cin, Entrada))
    {
        VerificaPalindromo checker(Entrada);

        if (checker.IsPalindromo())
        {
            cout << "A frase eh um palindromo." << endl;
        }
        else
        {
            cout << "A frase nao eh um palindromo." << endl;
        }

        cout << "Digite uma frase: ";

    }

    return 0;
}
