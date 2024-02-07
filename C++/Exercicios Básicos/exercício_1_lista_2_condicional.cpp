//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int N; //N=Número
	setlocale(LC_ALL,""); //Função para se utilizar acentuação
	cout<<"\nDigite o número a ser testado: ";
	cin>>N; //Leitura do número
	if (((N % 5)==0) && ((N % 3)==0)) //Condicional para se testar se é divisivel ou não
	{
	cout<<"\nO número é divisivel por 5 e por 3";
	}
	else
	{
	cout<<"\nO número não é divisivel por 5 e por 3";
	}
}
