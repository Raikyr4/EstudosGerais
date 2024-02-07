#include <iostream>
#include <cctype>
using namespace std;
 
void IdentifcaPalavra(string G)
{
    string Aux = "";
    int Coluna = 1;
    G+=" "; // adiciono um último carácter vazio para o loop rodar mais uma vez e imprimir a ultima palavra presente na string Aux
    for (int i = 0; i < G.size(); i++)
    {
        if (isalpha(G[i]))// função que identifica se o carácter eh ou nao alguma letra
        {
            Aux += G[i];
        }
        else
        {
            if (Aux.size() != 0)
            {
                cout << Coluna << " => " << Aux << " , tamanho: " << Aux.size() << endl;
                Aux = "";
                Coluna++;
            }
        }
    }
}

int main()
{
    string Frase;
    cout<<"Digite uma frase "<<endl;

    while (getline(cin, Frase))
    {
        IdentifcaPalavra(Frase);
        cout<<"Digite uma frase "<<endl;
    }
}