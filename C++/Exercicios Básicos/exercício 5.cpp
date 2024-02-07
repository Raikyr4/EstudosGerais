//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"");// Função usada para adicionar acentuaÃ§Ã£o no programa
	 
	 int A,B;//Variáveis do tipo inteiro 
	 
	 cout<<"digite um valor para A : "<<endl;
	 
	 cin>>A;//leitura de entrada com o valor de A
	 
	 cout<<"digite um valor para B : "<<endl;
	 
	 cin>>B;//leitura de entrada com o valor de B
	 
	  A=(A*B);
	  B=(A)/B; //troca de valores atraves de contas matemáticas
	  A= A/B;
	 
	 cout<<"trocando os valores : o A vai receber "<<A<<endl;//leitura de saida trocando os valores 
	 
	 cout<<"trocando os valores : o B vai receber "<<B<<endl;//leitura de saida trovado os valores
}
