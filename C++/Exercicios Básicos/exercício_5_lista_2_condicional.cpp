//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
	float pi,R,Al,V,A; //pi= Valor de pi, R=Raio da figura, Al= Altura da figura, V= Volume da figura, A= Area da figura
	int OP; //Op= opção selecionada 
	setlocale(LC_ALL,"");
	setprecision(2); //Função para se utilizar casas decimais
	cout<<"1 - Cone Reto";
	cout<<"\n2 - Cilindro";
	cout<<"\n3 - Esfera";
	cout<<"\nDigite a opção desejada a ser testada: ";
	cin>>OP; //Leitura da opção selecionada
	pi=3.1416;
	switch(OP) //Condicional switch para selecionar a opção escolhida
	{
		case 1: //Caso do cone reto
		cout<<"\nDigite o valor do raio: ";
		cin>>R; //Leitura do raio
		cout<<"\nDigite o valor da altura: ";
		cin>>Al; //Leitura da altura
		//Embaixo os cálculos utilizados
		V=(pi*pow(R,2)*Al)/3;
		A=pi*R*(sqrt(pow(R,2)+pow(Al,2)));
		
		cout<<"\nO valor da área é: "<<A;
		cout<<"\nO valor do volume é: "<<V;
		break;
		
		case 2: //Caso do cilindro
		cout<<"\n\nDigite o valor do raio: ";
		cin>>R; //Leitura do raio
		cout<<"\n\nDigite o valor da altura: ";
		cin>>Al; //Leitura da altura
		//Embaixo os cálculos utilizados
		V=pi*(pow(R,2))*Al;
		A=2*pi*R*Al;
		
		cout<<"\nO valor da área é: "<<A;
		cout<<"\nO valor do volume é: "<<V;
		break;
		
		case 3: //Caso da esfera
		cout<<"\n\nDigite o valor do raio: ";
		cin>>R; //Leitura do raio
		//Embaixo os cálculos utilizados
		V=(1.3333)*pi*pow(R,3);
		A=4*pi*pow(R,2);
		
		cout<<"\nO valor da área é: "<<A;
		cout<<"\nO valor do volume é: "<<V;
		break;
		
		default: //Caso não seja selecionada uma opção válida
		cout<<"\n\nOpção selecionada inválida, tente novamente";
		break;
	}
}
