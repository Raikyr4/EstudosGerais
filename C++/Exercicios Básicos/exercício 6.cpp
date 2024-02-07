//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	setlocale(LC_ALL,"");// Função usada para adicionar acentuação no programa
	 
	 float V;//Variável que armazena o valor da conta
	 
	 float D;//Variável que armazena o número dos dias
	 
	 float J;//Variável que armazena o valor dos juros
	
	 
	 float M;//Variável que armazena o valor da multa
	 float P;//Variável que armazena o valor do total a ser pago
	 
	cout<<"Digite o valor da conta : \n";  
	cin>>V;//leitura entrada do valor da conta
	
	cout<<"Digite número de  dias de atraso da conta :\n";
	cin>>D;//leitura entrada do número de dias 
	
	cout<<"Digite o valor da multa : \n";
	cin>>M;//leitura entrada do valor da multa
	
	cout<<"Digite o valor dos juros em porcentagem (%): \n";
	cin>>J;//leitura de entrada dos juros
	
	P= V+M+((J/100)*D);//cálculo do total a ser pago
	
	cout<<fixed<<setprecision(2);//função que determina o número de casas décimais 
	
	cout<<"Valor da conta: "<<V<<endl;//leitura de saida mostrando o valor da conta
	cout<<"Dias em atraso:"<<D<<endl;//leitura de saida mostrando o número de dias
	cout<<"Total da multa: "<<M<<endl;//leitura de saida mostrando o valor da multa
	cout<<"Total de juros: "<<J<<endl;//leitura de saida mostrando o valor dos juros
	cout<<"Total a pagar: "<<P<<endl;//leitura de saida mostrando o valor total a ser pago
}
	
