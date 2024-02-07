#include <fstream>
#include <iostream>
#include <string>
using namespace std;
main() {
	
	ifstream arquivo; // quando queremos ler algo dentro do arquivo /// OBS : para ler temos que saber toda a estrutura do arquivo ou seja como os dados estao organizados la dentro 
	
	string nome = "produto";
	double preco = 0.0;
	
	arquivo.open("materiais.txt");
	
	arquivo >> nome >> preco;
	cout << nome << " " << preco << endl;
	
	arquivo.close();
	
}
