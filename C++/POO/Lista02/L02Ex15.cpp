#include <iostream>
using namespace std;

class Contador
{

private:
    int valor;

public:
    Contador() { valor = 0; }

    void zerar()
    {
        valor = 0;
    }

    void incrementar()
    {
        valor++;
    }

    void imprimirValor()
    {
        cout << "O valor do contador é " << valor << endl;
    }
};
