//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int M; //Variável numérica utilizada, M=Média do aluno
	string Nome; //Variável não numérica utilizada, Nome do aluno
	setprecision(1); //Função usada para se utilizar casas decimais
	setlocale(LC_ALL,""); //Função usada para se utilizar acentuação no programa
	cout<<"\nDigite aqui o nome do aluno: ";
	getline(cin,Nome); //Leitura do nome do aluno podendo ser composto ou não
	cout<<"\nDigite aqui a média obtida por ele: ";
	cin>>M; //Leitura da média do aluno
	if(M>=9.0) //Função condicional para se determinar a recomendação
	{//Bloco no qual caso verdadeiro o aluno é altamente recomendado
		cout<<"\nO aluno "<<Nome<<" é altamente recomendado";
	}
	else
	{//Bloco no qual é garantido que são médias menores que 9
		if(M>=8.0)
		{//Bloco no qual caso verdadeiro o aluno é fortemente recomendado
			cout<<"\nO aluno "<<Nome<<" é fortemente recomendado";
		}
		else
		{//Bloco no qual é garantido que são médias menores que 8
			if(M>=7.0)
			{//Bloco no qual caso verdadeiro o aluno é recomendado
				cout<<"\nO aluno "<<Nome<<" é recomendado";
			}
			else
			{//Bloco no qual caso verdadeiro o aluno não é recomendado
			
				cout<<"\nO aluno "<<Nome<<" não é recomendado";
			
			}
		}
	}
}
