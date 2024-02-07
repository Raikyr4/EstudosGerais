//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"");// Função usada para adicionar acentuaação no programa
	
	string A;//Variável reponsável pelo armazenamento do nome do usuário
	
	float X;// Variável reponsálvel pelo armazenamento da nota de peso 2
	
	float Y;// Variável reponsálvel pelo armazenamento da nota de peso 1
	
	float M;// Variável reponsálvel pelo armazenamento da média ponderada das notas
	
	cout<<"Digite o nome do aluno :\n";
	
	cin>>A;// leitura do nome usuário
	
	cout<<"Digite as notas do aluno :\n";
	
	cin>>X>>Y;// leitura das notas do usuário
	
	M=(X*2)+(Y*3)/5;// Cálculo da média das notas
	
	cout<<fixed<<setprecision(1);// Função usada para ter precisão numérica nas casas decímais
	
	cout<<"O aluno "<<A<<" obteve a media "<<M<<endl;// leitura de saida indicando o nome do aluno e a média de suas notas
}