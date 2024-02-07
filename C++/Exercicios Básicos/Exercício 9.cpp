#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
   	setlocale(LC_ALL,"");// Função usada para adicionar acentuação no programa
   	
   	int Qa;//Variável que armazena a quantidade de sanduíches a fazer 
    float X;//Variável que armzena a quantidade em kg de queijo, presunto e hambúrger
	
	cout<<"Digite a quantidade de sanduíches a fazer : ";
	cin>>Qa;//leitura de inicio
	   	
   	X=Qa*(3*50+100)/1000;//Cálculo
   	
   	cout<<"A quantidade de queijo, presunto e hambúrger para fazer "<<Qa<<" sanduíches é de : "<<X<<" Kg"<<endl;//Leitura de saida 
   	
   }
