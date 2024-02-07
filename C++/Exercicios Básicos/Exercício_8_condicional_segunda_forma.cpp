//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.#include<iostream>
#include<iomanip>
#include<iostream>
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
	cin>>Op; //Leitura da opção escolhida
	
	switch(Op) //Função condicional switch no qual facilita a utilização de escolha das opções
	{
	case 1: //Primeiro caso
		if(P2==0)
		{//Bloco no qual mostra que não é possível a divisão
		cout<<"\nNão é possível fazer uma divisão por 0";
		}
		else
		{//Bloco no qual mostra que é possível fazer a divisão
		R1=P1/P2; //Cálculo para se determinar a divisão
		cout<<"\nO resultado de sua divisão inteira é: "<<R1;
		}
		break; //Função para se terminar o switch após esse caso terminar
		
	case 2: //Segundo caso
		R2=P1*P2; //Cálculo para se determinar a multiplicação
		cout<<"\nO resultado da multiplicação é: "<<R2;
		break; //Função para se terminar o switch após esse caso terminar
		
	case 3: //Terceiro caso
		R3=P1+P2; //Cálculo para se determinar a soma
		cout<<"\nO resultado da soma é: "<<R3;
		break; //Função para se terminar o switch após esse caso terminar
		
	case 4: //Quarto caso
		R4=P1-P2; //Cálculo para se determinar a subtração
		cout<<"\nO resultado da subtração é: "<<R4;
		break; //Função para se terminar o switch após esse caso terminar
		
	default: //Caso no qual a opção selecionada não existe
		cout<<"\nDesculpe mas não foi inserida nenhuma opção válida tente novamente";
		break; //Função para se terminar o switch após esse caso terminar
	}
}
