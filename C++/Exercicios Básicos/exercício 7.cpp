//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	setlocale(LC_ALL,"");// Função usada para adicionar acentuação no programa
	
	string X;//Variável que armazena o nome do aluno
	
	float A;// variável que armazena a nota 1
	
	float B;// variável que armazena a nota 2
	
	float C;// variável que armazena a nota 2
	
	float M;// variável que armazena a nota 3
	
	cout<<"Digite o nome do aluno : "<<endl;
	
	getline(cin,X); //leitura de entrada do nome do aluno
	cout<<"Digite as notas do aluno : "<<endl;
	cin>>A;
	cin>>B; // leitura de entrada das notas
	cin>>C;
	
	M=(A*0.3)+(B*0.2)+(C*0.5);//cálculo da média das notas
	
	cout<<fixed<<setprecision(1);//função que determina o número de casas décimais 
	cout<<"O aluno "<<X<<" teve nota final "<<M<<endl;//leitura de saida que mostra o nome do aluno e a média dele
}
	
	
	