//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int I; //Variável numérica utilizada, I=Idade da pessoa
	string N; //Variável não numérica utilizada, N=Nome da pessoa
	setlocale(LC_ALL,""); //Função usada para se utilizar acentuação no programa
	setprecision(2); //Função usada para se utilizar casas decimais
	cout<<"\nDigite o nome da pessoa: ";
	getline(cin,N); //Leitura do nome da pessoa podendo ser composto ou não
	cout<<"\nDigite a idade da pessoa: ";
	cin>>I; //Leitura da idade da pessoa
	if(I>=18) //Função consicional para se delimitar se a pessoa é maior de idade ou não
	{//Bloco no qual caso verdadeiro mostra que é maior de idade
		cout<<N<<" tem "<<I<<" e é maior de idade"; //Leitura que mostra nome da pessoa e idade, além de dizer que é maior de idade
	}
	else
	{//Bloco no qual mostra que é menor de idade
		cout<<N<<" tem "<<I<<" e não é maior de idade"; //Leitura que mostra nome da pessoa e idade, além de dizer que não é maior de idade
	}
}
