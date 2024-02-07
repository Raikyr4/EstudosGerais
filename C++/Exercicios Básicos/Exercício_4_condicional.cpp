//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
	int A,B,C; //Variáveis numéricas inteiras utilizadas, A=variável A, B=variável B, C=Variável C.
	float X,Delta,X1,X2; //Variáveis numéricas utilizadas
	setlocale(LC_ALL,""); //Função usada para se utilizar acentuação no programa
	setprecision(2); //Função usada para se utilizar casas decimais
	cout<<"\nDigite o número da variável A: ";
	cin>>A; //Leitura da variável A
	cout<<"\nDigite o número da variável B: ";
	cin>>B; //Leitura da variável B
	cout<<"\nDigite o número da variável C: ";
	cin>>C; //Leitura da variável C
	Delta=(pow(B,2))-4*A*C; //Conta para se calcular o delta
	cout<<"\n\nO valor de delta é: "<<Delta; //Leitura para se mostrar o delta em tela
	X=-B/A; //Conta para se calcular o X
	X1=(-B)+(sqrt(Delta))/(2*A); //Conta para se calcular o X1
	X2=(-B)-(sqrt(Delta))/(2*A); //Conta para se calcular o X2
	if(Delta<0) //Funcção consdicional para se determinar se existe ou não raízes reais
	{//Bloco no qual caso verdadeiro não existem raízes reais
		cout<<"\n\nNão existem raízes reais para tais variáveis";
	}
	else
		{//garanto que existem raizes
			if(Delta>0)
			{//Bloco no qual caso verdadeiro as raízes existem
				cout<<"\n\nAs raízes existem";
				cout<<"\nX1 é igual a "<<X1;
				cout<<"\nX2 é igual a "<<X2;
			}
			else
			{//Bloco no qual caso verdadeiro as raízes existem e são iguais
				if(Delta==0)
				{
					cout<<"\n\nAs raízes são iguais, e o resultado é "<<X;
				}
			}
		}
}
