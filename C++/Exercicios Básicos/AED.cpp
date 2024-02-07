#include <iostream>
#include <cmath>
using namespace std;
 
int main() 
{
	
   	setlocale(LC_ALL,"");// Função usada para adicionar acentuação no programa
   
 int hi,mi,hf,mf,MI,MF,m,h,Si,Sf,s;//Variáveis que armazenam os tempos iniciais e finais
 
 cin>>hi>>mi>>Si;//leitura de entrada dos tempos de inicio
 
 cin>>hf>>mf>>Sf;//leitura de entrada dos tempos de saida 
 
	MI=hi*60+mi;
	MF=hf*60+mf;
	h=((1440-MI)+MF)/60;         //CÁLCULOS DE CONVERTER AS HORAS
	m=((1440-MI)+MF)%60;
	s=(((1440-MI)+MF)%60)%60;
		
		cout<<"A viagem durou "<<h<<" HORA(S) E "<<m<<" MINUTO(S)"<<s<<" Segundos";
		//Leitura de saida com o número de horas, minutos e e segundos de duração da viagem
			}
