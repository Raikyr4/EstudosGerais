//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	setprecision(2); //Função usada para se utilizar casas decimais
	setlocale(LC_ALL,""); //Função usada para se utilizar acentuação no programa
	int M,N,D,X; //Variáveis usadas no programa, M=primeiro númerp, N=Segundo número, D=resto da divisão, X=Quociente da divisão
	cout<<"\nDigite o primeiro número: ";
	cin>>M; //Leitura do primiero número
	cout<<"\nDigite o segundo número: ";
	cin>>N; //Leitura do segundo número
	X=M/N; //Conta para determinar o quociente da divisão
	D=M%N; //Conta para determinar o resto da divisão
	if(D==0) //Função condicional para se delimitar se é divisível ou não
	{//Bloco caso a função atenda os requisitos
		cout<<"\nO primeiro número é divisível pelo segundo"; //Leitura para se dizer que é divisível
	}
	else
	{//Bloco caso a função atenda os requisitos
		cout<<"\nO primeiro número não é divisível pelo segundo"; //Leitura para se dizer que não é divisível
	}
	cout<<"\n\nO quociente da divisão "<<M<<" dividido por "<<N<<" é igual a: "<<X; //Leitura para se mostrar o quociente
	cout<<"\nO resto da divisão de "<<M<<" dividido por "<<N<<" é igual a: "<<D; //Leitura para se mostrar o resto
	
}
