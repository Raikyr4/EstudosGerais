#include <fstream>
#include <iostream>
#include <string>
using namespace std;
main() {
	
	ofstream registroNotas;
	registroNotas.open("NotasCMP.txt",ios::app); // toda vez que abrimos  um arquivo ele vai pra memoria ram e fica la ate fecharmos ele 

	// ios :: app é um namespace que permite escrever algo no arquivo sem sobrescreve-lo 
	
	string nome;
	double n1;
	double n2;
	double media;
	
	while (nome != "fim") {
		cout << "Nome: ";
		cin >> nome;
		if (nome == "fim") {break;}
		cout << "N1: ";
		cin >> n1;
		cout << "N2: ";
		cin >> n2;
		media = 0.4 * n1 + 0.6 * n2;
		cout << "M�dia: " << media << endl;
		
		registroNotas << nome << " " << n1 << " " << n2 << " " << media << endl;
	}
	
	registroNotas.close();// quando fechamos o arquivo ele volta para o disco so que com todas as alterações que fizemos
		
}
