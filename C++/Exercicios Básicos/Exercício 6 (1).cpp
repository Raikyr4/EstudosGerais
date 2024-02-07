#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
   	setlocale(LC_ALL,"");// Função usada para adicionar acentuação no programa
   	
   	int Na;//Variável que armazena a quantidade de anos sem acidente
   	int Nm;//Variável que armazena a quantidade de meses sem acidente
   	int Nd;//Variável que armazena a quantidade de dias de entrada
   	int d;//Variável que armazena a quantidade de dias de saida sem acidente
   	
   	cin>>Nd;//Leitura de entrada 
   	
   	Na=Nd/365;
   	Nm=(Nd%365)/30;  //Cálculos
   	d= Nd%365%30;
   	
   	cout<<"Anos : "<<Na<<endl;
	cout<<" Meses : "<<Nm<<endl;
	cout<<" Dias : "<<d<<endl;
	 //Leitura de saida 
}
