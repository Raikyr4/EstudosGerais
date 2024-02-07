//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float P1,P2,R1,R2,R3,R4; //Variáveis numéricas utilizadas, P1=Primeiro número, P2=Segundo número, R1=Divisão inteira, R2=Resultado da multiplicação, R3=Resultado da soma, R4=Resultado da subtração
	int Op; //Variável numérica inteira utilizada, Op=Opção escolhida
	setprecision(2); //Função usada para se utilizar casas decimais
	setlocale(LC_ALL,""); //Função usada para se utilizar acentuação no programa
	cout<<"\nDigite o primeiro número: ";
	cin>>P1; //Leitura do primeiro número
	cout<<"\nDigite o segundo número: ";
	cin>>P2; //Leitura do segundo número
	
	cout<<"\n1-Retornar o quociente inteiro de uma divisão";
	cout<<"\n2-Retornar a multiplicação de dois números";
	cout<<"\n3-Retornar a soma de dois números";
	cout<<"\n4-Retornar a subtração de dois números";
	cout<<"\n\nEscolha uma das opções acima e digite aqui o número escolhido: ";
	cin>>Op; //Leitura da opção escolhida pelo usuário
	
	if(Op==1) //Função condicional para se determinar a opção escolhida
	{//Bloco no qual a opção 1 foi escolhida
		if(P2!=0)
		{//Bloco no qual é possível fazer a divisão
		R1=P1/P2; //Cálculo para se determinar a divisão
		cout<<"\n\nO resultado de sua divisão inteira é: "<<R1;
		}
		else
		{//Bloco no qual não é possivel fazer a divisão
		cout<<"\nNão é possível fazer uma divisão por 0";
		}
	}
	else
	{
		if(Op==2)
		{//Bloco no qual a opção 2 foi escolhida
			R2=P1*P2; //Cálculo para se determinar a multiplicação
			cout<<"\nO resultado da multiplicação é: "<<R2;
		}
		else
		{
			if(Op==3)
			{//Bloco no qual a opção 3 foi escolhida
				R3=P1+P2; //Cálculo para se determinar a soma
				cout<<"\nO resultado da soma é: "<<R3;
				
			}
			else
			{
				if(Op==4)
				{//Bloco no qual a opção 4 foi escolhida
					R4=P1-P2; //Cálculo para se determinar a subtração
					cout<<"\nO resultado da subtração é: "<<R4;
				}
				else
				{//Bloco no qual a opção 3escolhida não existe
					cout<<"\nDesculpe mas não foi inserida nenhuma opção válida tente novamente";
				}
			}
		}
	}
}
