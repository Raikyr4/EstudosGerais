#include <iostream>
#include <vector>
using namespace std;

class MesaDeRestaurante {
private:
    vector<int> pedidos;

public:
    void adicionaAoPedido(int quantidade, int item) {
        if (item >= 0 && item < pedidos.size()) {
            pedidos[item] += quantidade;
        } else {
            pedidos.push_back(quantidade);
        }
    }

    void zeraPedidos() {
        for (int i = 0; i < pedidos.size(); i++) {
            pedidos[i] = 0;
        }
    }

    float calculaTotal(vector<float> precos) {
        float total = 0.0;
        for (int i = 0; i < pedidos.size(); i++) {
            total += pedidos[i] * precos[i];
        }
        return total;
    }
};

class RestauranteCaseiro {
private:
    vector<MesaDeRestaurante> mesas;

public:
    RestauranteCaseiro(int numMesas) : mesas(numMesas) {}

    void adicionaAoPedido(int quantidade, int item, int mesa) {
        if (mesa >= 0 && mesa < mesas.size()) {
            mesas[mesa].adicionaAoPedido(quantidade, item);
        } else {
            cout << "Mesa inválida." << endl;
        }
    }

    float calculaTotalMesa(int mesa, vector<float> precos) {
        if (mesa >= 0 && mesa < mesas.size()) {
            return mesas[mesa].calculaTotal(precos);
        } else {
            cout << "Mesa inválida." << endl;
            return 0.0;
        }
    }
};

int main() {
    vector<float> precos = {10.0, 20.0, 15.0}; // Preços dos itens

    RestauranteCaseiro restaurante(5);

    restaurante.adicionaAoPedido(2, 0, 0); // Adiciona 2 itens do tipo 0 à mesa 0
    restaurante.adicionaAoPedido(1, 1, 0); // Adiciona 1 item do tipo 1 à mesa 0

    restaurante.adicionaAoPedido(3, 1, 1); // Adiciona 3 itens do tipo 1 à mesa 1
    restaurante.adicionaAoPedido(1, 2, 1); // Adiciona 1 item do tipo 2 à mesa 1

    cout << "Total da mesa 0: " << restaurante.calculaTotalMesa(0, precos) << endl;
    cout << "Total da mesa 1: " << restaurante.calculaTotalMesa(1, precos) << endl;

    return 0;
}



/**Vantagens de criar classes desta forma:

Organização: As classes MesaDeRestaurante e RestauranteCaseiro permitem organizar o código de forma mais modular e legível.
Reutilização: É fácil reutilizar a lógica de manipulação de mesas em diferentes contextos ou projetos.
Encapsulamento: A lógica de manipulação de pedidos está encapsulada nas classes correspondentes, o que facilita a manutenção e evita efeitos colaterais inesperados.
Desvantagens:

Rigidez no número de mesas: A implementação fixa um número predeterminado e imutável de instâncias de MesaDeRestaurante. Isso pode ser problemático se o restaurante desejar alterar o número de mesas em tempo de execução.
Sugestões de melhoria:

Poderia ser adicionado tratamento de erros para situações como tentar adicionar a um pedido um item inválido ou uma quantidade negativa.
A implementação atual assume que os preços dos itens estão em um vetor chamado precos. Se os preços podem variar, seria bom adicionar uma forma de definir esses preços dinamicamente.

*/