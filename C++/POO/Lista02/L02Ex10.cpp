#include <iostream>
#include <vector>

using namespace std;

struct Pessoa
{
    string nome;
    string telefone;
    string email;
    string endereco;
};

class CadernoDeEnderecos
{
private:
    Pessoa x;
    vector<Pessoa> Lista;

public:
    // Construtor
    CadernoDeEnderecos(string name, string fone, string e, string end)
    {
        x.nome = name;
        x.telefone = fone;
        x.email = e;
        x.endereco = end;

        Lista.push_back(x);
    }

    // Métodos para obter os dados
    string getNome(int idDaPessoaDoCaderno)
    {
        return Lista[idDaPessoaDoCaderno].nome;
    }

    string getTelefone(int idDaPessoaDoCaderno)
    {
        return Lista[idDaPessoaDoCaderno].telefone;
    }

    string getEmail(int idDaPessoaDoCaderno)
    {
        return Lista[idDaPessoaDoCaderno].email;
    }

    string getEndereco(int idDaPessoaDoCaderno)
    {
        return Lista[idDaPessoaDoCaderno].endereco;
    }

    // Método para imprimir os dados
    void imprimirDados()
    {

        for (int i = 0; i < Lista.size(); i++)
        {
            cout << "Nome: " << Lista[i].nome << endl;
            cout << "Telefone: " << Lista[i].telefone << endl;
            cout << "Email: " << Lista[i].email << endl;
            cout << "Endereço: " << Lista[i].endereco << endl;
        }
    }
};

int main()
{
    CadernoDeEnderecos pessoa("João da Silva", "123456789", "joao@example.com", "Rua Principal, 123");

    pessoa.imprimirDados();

    return 0;
}
