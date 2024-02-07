#include <iostream>
#include <cmath>
using namespace std;
int main() {
		setlocale(LC_ALL,"");// Função usada para adicionar acentuação no programa
		
	int X,Fx;// Variáveis que armazenam o número de X e do resultado da equeção
	
	cout<<"Dado a equeção  F(x) = 2X^2 - 3 : "<<endl;
	cout<<"Insira o valor de X : ";
	
	cin>>X;//leitura de entrada mostrando o valor de X
	
	Fx=2*pow(X,2)-3;//cálculo da equação F(X)
	
	cout<<"As raizes de F("<<X<<")"<<"são : "<<Fx<<endl;//leitura de saida mostrando a(s) raize(s) encontrada(s) 
	
}
