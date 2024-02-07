//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float A,B,C; //A= LAdo A, B=Lado B, C= Lado C
	setlocale(LC_ALL,"");
	cout<<"\nDigite a variável A: ";
	cin>>A; //Leitura do lado A
	cout<<"\nDigite a variável B: ";
	cin>>B; //Leitura do lado B
	cout<<"\nDigite a variável C: ";
	cin>>C; //Leitura do lado C

		if (pow(A,2) == pow(B,2) + pow(C,2)) //Condicional para se testar se é um triangulo retangulo
		{
		cout<<"\n\nEssas variáveis formam um triângulo retângulo";
		}
		else
		{
			if (pow(A,2) > pow(B,2) + pow(C,2))
			{
			cout<<"\n\nEssas variáveis formam um triângulo obtusângulo"; //Condicional para se testar se é um triangulo obtusangulo ou acutangulo
			}
			else
			{
			cout<<"\n\nEssas variáveis formam um triângulo acutângulo";
			}
		}
}

