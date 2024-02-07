#include <string>
using namespace std;
class Pessoa
{
private:
    string nome;
    string dataNascimento;
    string Telefone;
    int ID;

public:
    Pessoa(string name, string data, string fone);
    Pessoa();
    void set_nome(string name)
    {
        nome = name;
    }
    void set_data(string data)
    {
        dataNascimento = data;
    }
    void set_telefone(string Fone)
    {
        Telefone = Fone;
    }
    string get_nome()
    {
        return nome;
    }
    string get_dataNascimento()
    {
        return dataNascimento;
    }
    string get_fone()
    {
        return Telefone;
    }
    string get_dados()
    {
        return "NOME : " + nome + "\n" + "DATA DE NASCIEMNTO : " + dataNascimento + "\n" + "TELEFONE DE CONTATO : " + Telefone;
    }
};

Pessoa::Pessoa(string name, string data, string fone)
{
    nome = name;
    dataNascimento = data;
    Telefone = fone;
}
Pessoa::Pessoa()
{
    nome = " ";
    dataNascimento = " ";
    Telefone = " ";
    ID=rand();
}