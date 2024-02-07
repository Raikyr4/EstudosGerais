#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
   	setlocale(LC_ALL,"");// Função usada para adicionar acentuação no programa
   	
    float Total;//Variável que armazena o total gasto para a marcação;
    
	int N;//Variável que armazena o número de frango;
	
	cout<<"Digite o número de frangos presente na granja : ";
	
	cin>>N;// leitura de entrada do número de frangos
	
    Total = 11.00*N;//Cálculo do total gasto
   
    cout<<fixed<<setprecision(2);//função que determina o número de casas décimais
   
    cout<<"O gasto total para marcar todos os frangos Ã© de : "<<Total<<endl; //leitura de saida   
	  
    return 0;
}