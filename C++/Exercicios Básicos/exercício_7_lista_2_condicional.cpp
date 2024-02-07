//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"");
	float Altura,P; //P=Peso
	string Sexo;
	cout<<"\nCálculo do peso ideal"; //Nome do programa
	cout<<"\nDigite M para masculino ou F para feminino: ";
	cin>>Sexo; //Leitura do sexo da pessoa
	if(Sexo!="m" && Sexo!="M" && Sexo!="f" && Sexo!="F") //Condicional para se testar se foi selecionado um sexo válido
	{
		cout<<"\nOpção digitada inválida";
	}
	else
	{
		if(Sexo=="M"|| Sexo=="m") //Condicional para caso o sexo seja Masculino
		{
			cout<<"\nDigite a altura: ";
			cin>>Altura;
			P=72.7*Altura-58;
			cout<<"O peso ideal é "<<P;
		}
		if(Sexo=="F" || Sexo=="f") //Condicional para caso o sexo seja Feminino
		{
			cout<<"\nDigite a altura: ";
			cin>>Altura;
			P=62.1*Altura-44.7;
			cout<<"O peso ideal é "<<P;
		}
	}
}
