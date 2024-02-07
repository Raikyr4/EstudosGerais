//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout<<setprecision(2); //Função usada para se utilizar casas decimais
	cout<<fixed;
	float SI,SM,SF; //Variáveis numéricas utilizadas, SI=Salário atual, SM=Aumento no salário , SF=Slário final
	string Nome; //Variável não numérica utilizada, Nome do jogador
	setlocale(LC_ALL,""); //Função usada para se utilizar acentuação no programa
	cout<<"\nDigite o nome do jogador: ";
	getline(cin,Nome); //Leitura do nome do jogador podendo ser composto ou não
	cout<<"\nDigite o salário atual dele: ";
	cin>>SI; //Leitura do salário atual
	if(SI>1800) //Função condicional para se saber qual deve ser o aumento no salário
	{//Bloco no qual caso verdddeiro o salário atual é maior que 1800
		SM=SI*0.05;/ //Conta para se determinar o aumento
		SF=SM+SI; //Conta par se determinar o salário final com o aumento
		cout<<"\nO jogador "<<Nome<<" terá aumento de R$ "<<SM<<" e passará a receber R$ "<<SF;
	}
	else
	{
		if(SI>1300)
		{//Bloco no qual caso verdddeiro o salário atual é maior que 1300 poorém menor que 1800
			SM=SI*0.1; //Conta para se determinar o aumento
			SF=SM+SI; //Conta par se determinar o salário final com o aumento
			cout<<"\nO jogador "<<Nome<<" terá aumento de R$ "<<SM<<" e passará a receber R$ "<<SF;
		}
		else
		{
			if(SI>900)
			{//Bloco no qual caso verdddeiro o salário atual é maior que 900 porém menor que 1300
				SM=SI*0.15; //Conta para se determinar o aumento
				SF=SM+SI; //Conta par se determinar o salário final com o aumento
				cout<<"\nO jogador "<<Nome<<" terá aumento de R$ "<<SM<<" e passará a receber R$ "<<SF;
			}
			else
			{//Bloco no qual caso verdddeiro o salário atual é até 900
				SM=SI*0.20; //Conta para se determinar o aumento
				SF=SM+SI; //Conta par se determinar o salário final com o aumento
				cout<<"\nO jogador "<<Nome<<" terá aumento de R$ "<<SM<<" e passará a receber R$ "<<SF;
			}
		}
	}
}
