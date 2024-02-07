#include <iostream>
#include <random>
using namespace std;

class Craps
{
protected:
    int Dados;
    int Pontos;

    void JogaDados()
    {
        Dados = (rand() % 6) + 1;
        Dados += (rand() % 6) + 1;
    }

public:
    void ComecarJogo()
    {

        int lance = 1;
        while (true)
        {
            JogaDados();
            if (lance == 1)
            {
                switch (Dados)
                {
                case 11:
                    cout << "You win! \n YO ELEVEN" << endl;
                    return;
                case 7:
                    cout << "You win! \n SEVEN" << endl;
                    return;
                case 2:
                    cout << "Crapss! \n SNAKE EYES" << endl;
                    return;
                case 3:
                    cout << "Crapss! \n TREY" << endl;
                    return;
                case 12:
                    cout << "Crapss! \n BOX CARS" << endl;
                    return;
                default:
                    Pontos = Dados;
                    lance++;
                    continue;
                }
            }
            else
            {
                if (Dados != Pontos && Dados == 7)
                {
                    cout << "YOU LOST!" << endl;
                    return;
                    // begin = 0;
                }
                if (Dados == Pontos)
                {
                    cout << "YOU WIN!" << endl;
                    return;
                    // begin = 0;
                }
            }
        }
    }
};

int main()
{

    char Denovo;
    Craps Jogador1;
    cout << "QUER JOGAR ? S / N" << endl;
    while (cin >> Denovo && (Denovo == 'S' || Denovo == 's'))
    {
        Jogador1.ComecarJogo();
        cout << endl;
        cout << "QUER JOGAR NOVAMENTE? S / N" << endl;
    }
}