//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	
	setlocale(LC_ALL,"");// Função usada para adicionar acentuação no programa
	
	string A; //Variável reponsável pelo armazenamento do nome do usuário
	
	float Z; // Variável reponsálvel pelo armazenamento do salário inicial 
	
	float X; //Variável reponsálvel pelo armazenamento do aumento do salário
	
	float Y;//Variável reponsálvel pelo armazenamento do salário final
	
	cout<<fixed<<setprecision(2);// Função usada para ter precisão numérica nas casas decímais
	
	cout<<"Digite seu nome\n";
	
	getline(cin,A);// leitura do nome do usário
	
	cout<<"Digite seu salário inicial\n";
	
	cin>>Z; // leitura do salário inicial
	
	X=Z*0.25;// Cálculo do aumento do salário
	
	Y=Z*1.25;// Cálculo do salário final
	
	cout<<"O funcionário "<<A<<" teve um aumento de R$ "<<X<<" e passará a receber um salário de R$ "<<Y<<endl;
	// leitura de saida que mostra o nome do usuário , o aumneto do salário e o salário final
}
