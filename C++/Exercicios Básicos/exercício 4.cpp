//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"");// Função usada para adicionar acentuação no programa
	
	float St;//variável que armazenam o valores do Seguro total 
	
	float nM;//variável que armazenam o valores do nÃºmero de acres de milho plantados
	
	float nF;//variável que armazenam o valores do nÃºmero de acres de feijão plantados
	
	float nC;//variável que armazenam o valores do nÃºmero de acres de café planatdos
	
	cout<<"Digite o numero de acres plantados com Milho : \n";
	
	cin>>nM;//Leitura do número de acres de milho plantados
	
	cout<<"Digite o numero de acres plantados com Feijao : \n";
	
	cin>>nF;//Leitura do número de acres de feijão plantados
	
	cout<<"Digite o numero de acres plantados com Cafe : \n";
	
	cin>>nC;//Leitura do número de acres de café planatdos
	
	cout<<"O valor do seguro para a plantacao de milho e : "<<0.035*nM<<endl;// Leitura de saida que mosta o valor do seguro para plantação de milho
	
	cout<<"O valor do seguro para a plantacao de feijao e : "<<0.035*nF<<endl;// Leitura de saida que mosta o valor do seguro para plantação de feijão
	
	cout<<"O valor do seguro para a plantacao de cafe e : "<<(0.035*nC)<<endl;// Leitura de saida que mosta o valor do seguro para plantação de café
	
	cout<<"O custo total de seguro sera : "<<((0.035*nM)+(0.035*nF)+(0.035*nC))*1000<<" R$"<<endl;// Leitura de saida que mosta o valor do seguro total
}
