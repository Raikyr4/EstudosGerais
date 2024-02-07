#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
   	setlocale(LC_ALL,"");// Função usada para adicionar acentuação no programa
   	
   	float Ar;//Variável que armazena a quantia arrecadada no dia 
   	
   	int P,Pa;//Variáveis que armazenam as quantias de Pão de queijo e Pão nomral
   	
   	float Pol;// Variável que armazena a quantia que deve ser guardada na polpança
   	
   	cout<<"insira a quamtidade de pães e pães de queijos vendidos no dia : ";
   	cin>>P>>Pa;//leitura de inicio 
   	
   	 Ar=P*0.12+Pa*1.50;  // cálculos
   	 Pol=Ar*0.10;
   	 
   	 cout<<fixed<<setprecision(2);//função que determina a precisão das casas decimais 
   	 
   	 cout<<"O valor arrecadado no dia foi de : "<<Ar<<" R$"<<endl;//leitura de saida 
   	 
   	 cout<<"O valor que deve ser guardado na polpança é de : "<<Pol<<" R$"<<endl;//leitura de saida
   }
