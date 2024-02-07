//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	setprecision(2); //Função usada para se utilizar casas decimais
	setlocale(LC_ALL,""); //Função usada para se utilizar acentuação no programa
	float P1,P2,M; //Variáveis numéricas utilizadas, P1=Primeira nota, P2=Segunda nota, M=Media das notas
	string N; //Variável não numérica utilizada, N=Nome do aluno
	cout<<"\nDigite o nome do aluno: ";
	getline(cin,N); //Leitura do nome do aluno podendo ser composto ou não
	
	cout<<"\nDigite a primeira nota: ";
	cin>>P1; //Leitura da primeira nota
	
	cout<<"\nDigite a segunda nota: ";
	cin>>P2; //Leitura da segunda nota
	
	M=((P1*2)+(P2*3))/(3+2); //Cálculo da média ponderada do aluno
	if(M<3) //Função consicional para se delimitar se foi aprovado ou reprovado
	{//Bloco no qual caso verdadeiro o aluno foi reprovado
		cout<<"\nO aluno "<<N<<" obteve média "<<M<<" e está reprovado";
	}
	else
		{//garanto que apartir daqui é maior que 3
			if(M>=7)
			{//bloco no qual o aluno foi aprovado 
				cout<<"\nO aluno "<<N<<" obteve média "<<M<<" e está aprovado";
			}
			else
			{//bloco no qual o aluno irá para a recuperação
				cout<<"\nO aluno "<<N<<" obteve média "<<M<<" e irá para a recuperação";
			}
		}
}
