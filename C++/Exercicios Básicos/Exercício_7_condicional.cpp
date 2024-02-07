//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float A,B,C; //Variáveis numéricas utilizadas, A=Primeiro número, B=Segundo número, C=Terceiro número
	cout<<setlocale(LC_ALL,""); //Função usada para se utilizar acentuação no programa
	setprecision(2); //Função usada para se utilizar casas decimais
	cout<<"\nDigite o primeiro número: ";
	cin>>A; //Leitura do primeiro número
	cout<<"\nDigite o segundo número: ";
	cin>>B; //Leitura do segundo número
	cout<<"\nDigite o terceiro número: ";
	cin>>C; //Leitura do terceiro número
	if(A>B && A>C) //Função condicional para se determinar qual o maior número
	{//Bloco no qual garanto que o A é maior que as outras
		if(B>C)
		{//Bloco no qual caso verdadeiro o A é o maior e o menor o C
			cout<<"\nO maior número é "<<A<<" e o menor é "<<C;
		}
		else
		{//Bloco no qual caso verdadeiro o A é o maior e o menor o B
			cout<<"\nO maior número é "<<A<<" e o menor é "<<B;
		}
	}
	else
	{
		if(B>A && B>C)
		{///Bloco no qual garanto que o B é maior que as outras
			if(A>C)
			{//Bloco no qual caso verdadeiro o B é o maior e o menor o C
				cout<<"\nO maior número é "<<B<<" e o menor é "<<C;
			}
			else
			{//Bloco no qual caso verdadeiro o B é o maior e o menor o A
				cout<<"\nO maior número é "<<B<<" e o menor é "<<A;
			}
		}
		else
		{
			if(C>A && C>B)
			{//Bloco no qual garanto que o C é maior que as outras
				if(A>B)
				{//Bloco no qual caso verdadeiro o C é o maior e o menor o B
					cout<<"\nO maior número é "<<C<<" e o menor é "<<B;
				}
				else
				{//Bloco no qual caso verdadeiro o C é o maior o menor o A
					cout<<"\nO maior número é "<<C<<" e o menor é "<<A;
				}
			}
			else
			{
				if(A=B && A!=C)
				{//Bloco no qual garanto que o A e o B são iguais
					if(A>C)
					{//Bloco no qual caso verdadeiro A e B são os maiores
						cout<<"\nO A e o B são iguais e maiores que o C";
					}
					else
					{//Bloco no qual caso verdadeiro A e B são os menores
						cout<<"\nO A e o B são iguais e menores que o C";
					}
				}
				else
				{
					if(A=C && A!=B)
					{//Bloco no qual garanto que o A e o C são iguais
						if(A>B)
						{//Bloco no qual caso verdadeiro A e C são os maiores
							cout<<"\nO A e o C são iguais e maiores que o B";
						}
						else
						{//Bloco no qual caso verdadeiro A e C são os menores
							cout<<"\nO A e o C são iguais e menores que o C";
						}
					}
					else
					{
						if(B=C && B!=A)
						{//Bloco no qual garanto que o B e o C são iguais
							if(B>A)
							{//Bloco no qual caso verdadeiro B e C são os maiores
								cout<<"\nO B e o C são iguais e maiores que o A";
							}
							else
							{//Bloco no qual caso verdadeiro B e C são os menores
								cout<<"\nO B e o C são iguais e menores que o A";
							}
						}
						else
						{
							if(A=B=C)
							{//Bloco no qual caso verdadeiro A, B e C são iguais
								cout<<"\nNão tem maior ou menor pois todos são iguais";
							}
						}
					}
					
				}
			}
		}
	}
}
