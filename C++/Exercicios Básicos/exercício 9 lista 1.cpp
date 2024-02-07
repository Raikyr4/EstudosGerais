//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
		setlocale(LC_ALL,"");// Função usada para adicionar acentuação no programa
			
	double C; //Variável que armazena o valor do capital inicial
	
	double M;//Variável que armazena o valor do Montante final
	
	double n;//Variável que armazena o valor do número de anos
	
	double i;//Variável que armazena o valor da taxa de lucro
	
	cout<<"Insira o valor do Capital inicial : ";
	
	cin>>C; // leitura de entrada do capital inicial
	
	cout<<"Insira a taxa de lucro em (%) : ";
	
	cin>>i;//leitura de entrada da taxa de lucro
	
	cout<<"Insira o número de anos para o investimaneto : ";
	
	cin>>n;//leitura de entrada do número de anos
	
	M=C*pow((1+i/100),n);//Cálculo do montante final
	
	cout<<fixed<<setprecision(2);//Função responável pela rpecisão das casa decimais
	
	cout<<"O montante acumulado durante "<<n<<" anos foi de "<<M<<endl;//leitura de saida que informa o montante final de acordo com o número de anos investidos 
}
