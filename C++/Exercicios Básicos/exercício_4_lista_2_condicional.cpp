//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int N,N2; //N=Número, N2=Raiz inteira do número 
	float N1; //N1 = Raiz do número podendo ter casas decimais
	setlocale(LC_ALL,"");
	cout<<"Digite o número a ser testado: ";
	cin>>N; //Leitura do Número
	N1=sqrt(N);
	N2=sqrt(N);
	if (N1==N2) //Condicional para se testar se é quadrado perfeito ou não
	{
	cout<<"\nO número digitado é um quadrado perfeito";
	}
	else 
	{
	cout<<"\nO número digitado não é um quadrado perfeito";
	}
}

