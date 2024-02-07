//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int N,MC,DU,S,Final; //N=Número, MC= Milhar e centena, DU= Dezena e unidade, S= Soma de MC e Du, Final é para se testar se o número possui
	setlocale(LC_ALL,"");
	cout<<"\nDigite um número de 4 dígitos: ";
	cin>>N; //Leitura do número
	MC=N/100;
	DU=N%100;
	S=MC+DU;
	Final= pow(S,2);
	if(N>=1000 && N<=9999) //Condicional para se testar se o número possui 4 dígitos
	{
		if (Final==N) //Condicional para se testar se o número possui a caracteristica ou não
		{
		cout<<"\nO número digitado possui tal característica";
		}
		else 
		{
		cout<<"\nO número digitado não possui tal característica";
		}
	}
	else
	{
		cout<<"\nO número digitado não possui 4 dígitos, tente novamente";
	}
}
