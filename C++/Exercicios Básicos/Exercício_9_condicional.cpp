//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int N,MC,DU,M,C,In; //Variáveis numéricas utilizadas, N=Núemro, MC=Algarismo de milhar e da centena juntos, DU=Algarismo da dezena e unidade juntos, M=Algarismo de milhar, C=Algarismo da centena, In=inverso
	setprecision(2); //Função usada para se utilizar casas decimais
	setlocale(LC_ALL,""); //Função usada para se utilizar acentuação no programa
	cout<<"\nDigite o número de quatro digitos: ";
	cin>>N; //Leitura do número de quatro digitos
	
	MC=N/100; //Cálculo para se pegar o algarismo de milhar e da centena
	DU=N%100; //Cálculo para se pegar o algarismo da dezena e unidade
	M=MC/10; //Cálculo para se determinar o algarismo de milhar
	C=MC%10; //Cálculo para se determinar o algarismo da centena
	In=C*10+M; //Cálculo para se inverter
	
	if((N>=1000) || (N<=9999)) //Função condicional para se verificar se o número é de quatro algarismos
	{//Bloco no qual caso verdadeiro o número não possui quatro digitos
		cout<<"\nO número deve ser de quatro algarismos";
	}
	else
	{//Bloco no qual o número possui quatro digitos
		if(In==DU)
		{//Bloco no qual o número é um palíndromo
		cout<<"\nO número "<<N<<" é um palíndromo e seu palíndromo é: "<<N;
		}
		else
		{//Bloco no qual o número não é um palíndromo
			cout<<"\nO número digitado "<<N<<" não é um palíndromo";
		}
	}
}
