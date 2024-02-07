#include <fstream>
#include <iostream>
#include <string>
using namespace std;
main() {
	ifstream arquivo;
	
	arquivo.open("materiais.txt");
	
	while(arquivo.good()) //função good verifica se ha a proxima linha no arquivo , ou sej aem quanto tiver mais uma linha no arquivo vai entrar no looping ;
	{
		string nome;
		double preco;
		arquivo >> nome >> preco;
		cout << nome << " " << preco << endl;
	}
	
	arquivo.close();
	
}
