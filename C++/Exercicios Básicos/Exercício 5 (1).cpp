#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
   	setlocale(LC_ALL,"");// Função usada para adicionar acentuação no programa
   	
   	float S,Sa,Sf;//Variáveis que armazernam  aquantia dos sálario inicial,o sálario coma umento e o sálario final
    
    cout<<"Digite o Sálario inicial : "<<endl;
    cin>>S;//leitura de entrada 
    
   Sa=(S*1.15);
   Sf= Sa*0.92;   //cálculos
   
   cout<<fixed<<setprecision(2);//função que determina a precisão das casas decimais 
   
   cout<<"O Sálario inicial era de : "<<S<<endl;//leitura de saida 
   
   cout<<"O Sálario com aumento é de : "<<Sa<<endl;//leitura de saida 
   
   cout<<"O Sálario final é de : "<<Sf<<endl;//leitura de saida 
    return 0;
}
