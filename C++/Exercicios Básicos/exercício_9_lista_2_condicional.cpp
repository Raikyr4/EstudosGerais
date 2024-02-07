//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
using namespace std;
int main()
{
	int N, NF; //N=Número, NF=Número final da placa
	setlocale(LC_ALL,"");
	cout<<"\nDigite os quatro digitos da placa: ";
	cin>>N; //Leitura do número da placa
	if(N>=1000 && N<=9999) //Condicional para se testar se a placa possui ou não quatro digitos
	{
		NF=N%10; //Conta para se determinar o ultimo dígito
		if(NF==1 || NF==2) //Condicional para caso seja o mês de janeiro
		{
			cout<<"\n\nO mês de emplacamento é Janeiro";
		}
		if(NF==3 || NF==4) //Condicional para caso seja o mês de fevereiro
		{
			cout<<"\n\nO mês de emplacamento é Fevereiro";
		}
		if(NF==5 || NF==6) //Condicional para caso seja o mês de Mmarço
		{
			cout<<"\n\nO mês de emplacamento é Março";
		}
		if(NF==7 || NF==8) //Condicional para caso seja o mês de abril
		{
			cout<<"\n\nO mês de emplacamento é Abril";
		}
		if(NF==9 || NF==0) //Condicional para caso seja o mês de maio
		{
			cout<<"\n\nO mêss de emplacamento é Maio";
		}
	}
	else
	{
		cout<<"\n\nA placa não possui o número de digitos necessários";
	}
}
