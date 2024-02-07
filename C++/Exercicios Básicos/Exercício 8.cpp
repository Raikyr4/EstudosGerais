#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
   	setlocale(LC_ALL,"");// Função usada para adicionar acentuação no programa
   	
   	int C,A;//Variáveis que armazenam os valora a pagar de Carlos e André 
   	float F;//Variável que armazena o valor a ser pago pelo Felipe  
   	float X;//Variável que armazena o valor da conta ser paga 
   	
   	cout<<"Insir o valor da conta total : ";
   	cin>>X;
   	
   	C=X/3;
   	A=X/3;  //Cálculos 
   	F=X-A-C;
   	
   	cout<<fixed<<setprecision(2);//função que determina a precisão das casas decimais 
   	cout<<"Carlos vai pagar "<<(float)C<<" R$"<<endl;//leitura de saida 
   	
   	cout<<"André vai pagar "<<(float)A<<" R$"<<endl;//leitura de saida 
   	
   	cout<<"Felipe vai pagar "<<F<<" R$"<<endl;//leitura de saida 
   }
