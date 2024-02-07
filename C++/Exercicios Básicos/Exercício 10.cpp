#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
   	setlocale(LC_ALL,"");// Função usada para adicionar acentuação no programa
   
	
	float X,P,M;//Variáveis que armazenam o valor do combustivel,o valor a ser pago e o total em litros 
	
	cout<<"Digite o valor do combustível : ";
	cin>>X;//leitura de entrada do valor do combustível 
	cout<<"Digite o valor a ser pago : ";
	cin>>P;//leitura de entrada do valor a ser pago
	
	M=X/P;//cálculo da quantidade de litros  
	
	cout<<"O total em litos de combutível colocado foi de : "<<M<<endl;//leitura de saida
	
}
