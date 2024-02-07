#include <iostream>
#include "Pessoa.h"

using namespace std;

int main()
{

    Pessoa P;
    string X, Y;
    string F;
    cout << P.get_dados() << endl;

    cin >> X;
    cin >> Y;
    cin >> F;

    P.set_data(Y);
    P.set_nome(X);
    P.set_telefone(F);
    cout << P.get_dados() << endl;
    cout << P.get_fone() << " " << P.get_dataNascimento() << " " << P.get_nome() << endl;
}