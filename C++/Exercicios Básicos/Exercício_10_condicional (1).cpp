//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int Op; //Variável numérica inteira utilizada, Op=Opção escolhida
	float A,T,TD,T1,TD1,TD2,TD0,TF; //Variáveis numéricas utlizadas, A=Área, T=Total,TD=Desconto de 10% após a aplicação do primeiro desconto, TD0= Aplicação do primeiro desconto de 5%, T1=Quanto passou de 1750, TD1=Desconto de 5%, TD2=Desconto de 10%, TF=Total já após aplicação do desconto
	string N; //Variável não numérica utilizada, N=Nome do fazendeiro
	setprecision(2); //Função usada para se utilizar casas decimais
	setlocale(LC_ALL,""); //Função usada para se utilizar acentuação no programa
	cout<<"\nNome do fazendeiro: ";
	getline(cin,N); //Leitura do nome do fazendeiro podendo ser composto ou não
	cout<<"\nDigite quantos acres serão pulverizados: ";
	cin>>A; //Leitura da área
	
	cout<<"\n\n1-pulverização contra ervas daninhas,  R$ 5,00 por acre";
	cout<<"\n2-pulverização  contra gafanhotos, R$ 10,00 por acre";
	cout<<"\n3-pulverização contra broca, R$ 15,00 por acre";
	cout<<"\n4-pulverização contra tudo acima, R$ 25,00";
	cout<<"\nSelecione a forma a ser pulverizada: ";
	cin>>Op; //Leitura da opção selecionada
	
	switch(Op) //Função condicional switch no qual facilita a utilização de escolha das opções
	{
		case 1: //Primeiro caso
			T=A*5.00; //Cálculo para se calcular o valor total
			break; //Função para se terminar o switch após esse caso terminar
			
		case 2: // Segundo caso
			T=A*10.00; //Cálculo para se calcular o valor total
			break; //Função para se terminar o switch após esse caso terminar
			
		case 3: //Terceiro caso
			T=A*15.00; //Cálculo para se calcular o valor total
			break; //Função para se terminar o switch após esse caso terminar
			
		case 4: //Quarto caso
			T=A*25.00; //Cálculo para se calcular o valor total
			break; //Função para se terminar o switch após esse caso terminar
			
		default: //Caso no qual a opção selecionada não existe
			cout<<"\nA opção digitada não é uma opção possível";
			break; //Função para se terminar o switch após esse caso terminar
			return 0; //Função para se terminar o programa
	}
	if((A>=300) && (T>1750))
	{//Bloco para caso ambos os descontos seja maplicado
		TD0=T*(5/100); //Cálculo para se descobrir o primeiro desconto de 5% aplicado
		TD=TD0*(10/100); //Cálculo para se descobrir o desconto de 10% depois de ser aplicado o primeiro
		TF=T-TD; //Cálculo para se descobrir o total final
		cout<<"\nO fazendeiro "<<N<<" irá pagar R$"<<TF<<" pelo serviço de pulverização";
	}
	else
	{
		if(A>=300)
		{//Bloco para caso apenas o desconto de 5% seja aplicado
			TD1=T*(5/100); //Cálculo para se descobrir o desconto
			TF=T-TD1; //Cálculo para se descobrir o total final
			cout<<"\nO fazendeiro "<<N<<" irá pagar R$"<<TF<<" pelo serviço de pulverização";
		}
	
		else
		{
			if(T>1750)
			{//Bloco para caso apenas o desconto de 10% seja aplicado
				T1=T-1750; //Cálculo para se descobri quanto passou de 1750
				TD2=T1*(10/100); //Cálculo para se descobrir o desconto
				TF=T-TD2; //Cálculo para se descobrir o total final
				cout<<"\nO fazendeiro "<<N<<" irá pagar R$"<<TF<<" pelo serviço de pulverização";
			}
			else
			{//Bloco para caso não seja aplicado nenhum desconto
				cout<<"\nO fazendeiro "<<N<<" irá pagar R$"<<T<<" pelo serviço de pulverização";
			}
		}
	}
}
