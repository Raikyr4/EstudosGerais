#include <iostream>
#include<string>

using namespace std;

struct DataDeNascimento
{
    int dia;
    int mes;
    int ano;
};

struct Pessoa
{
    int idade;
    int tituloEleitor;
    float altura;
    string nome;
    float peso;
    DataDeNascimento dataDeNascimento;
};


struct PessoaFuncionario
{
    float salario;
    int hora;
    Pessoa pessoa;

};
float HoraPorTrabalho(PessoaFuncionario &x)
{
    return x.salario/x.hora;
}

bool MaiorIdade(Pessoa &a)
{
    if(a.idade>18){
        return true;
        
    }
}

int main()
{
    PessoaFuncionario func;
    cout << "Nome: ";
    cin >> func.pessoa.nome;
    cout << "Idade: ";
    cin >> func.pessoa.idade;
    cout << "Altura: ";
    cin >> func.pessoa.altura;
    cout << "Peso: ";
    cin >> func.pessoa.peso;
    cout << "Data de nascimento "<< endl;
    cout<< "Digite o dia :";
    cin >> func.pessoa.dataDeNascimento.dia ;
    cout<< "Digite o mes :";
    cin >> func.pessoa.dataDeNascimento.mes ;
    cout<< "Digite o ano :";
    cin>> func.pessoa.dataDeNascimento.ano;

    cout <<"Digite o salario : " ;
    cin >> func.salario;
    cout << "Digite horas trabalhadas: ";
    cin >> func.hora;

    cout << "O funcionario recebe" <<  HoraPorTrabalho(func)<< endl;

    if (MaiorIdade(func.pessoa))
    {
        cout << "Digite o titulo de eleitor:"<<endl;
        cin>>func.pessoa.tituloEleitor;
    }
    else
    {
        cout<<" eh de menor "<<endl;
        func.pessoa.tituloEleitor = 0;
    }

    
    
    return 0;

}