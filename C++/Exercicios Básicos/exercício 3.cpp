//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"");// Função usada para adicionar acentuação no programa
	
	float A,B,C,D,E,F,X,Y; // Variáveis  que armazenam os valores dos coeficientes das equações
	
	cout<<"Digite os valores desejados para os coeficientes na respectiva ordem : a,b,c,d,e,f"<<endl;
	
	cin>>A>>B>>C>>D>>E>>F;//Leitura dos coeficientes 
	
	X=(C*E-B*F)/(A*E-B*D); 
							//	Cálculo das equações
	Y=(A*F-C*D)/(A*E-B*D);
	
	cout<<"Dados os coeficientes, a Equacao X Ã© igual : "<<X<<endl;
																		//leitura de saida informando os resultados
	cout<<"Dados os coeficientes, a Equacao Y Ã© igual : "<<Y<<endl;
}