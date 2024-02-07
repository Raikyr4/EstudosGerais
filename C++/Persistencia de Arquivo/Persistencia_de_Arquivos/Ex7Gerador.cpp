#include <iostream>
#include <fstream>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;
main() {
	int quantidade;
	int contador;
	ofstream arquivoNumeros;
	
	cout << "Digite a quantidade de números a serem gerados: ";
	cin >> quantidade; 
	arquivoNumeros.open("numeros.txt");
	srand(time(NULL));
	for (contador = 1; contador <= quantidade; contador++) {
		arquivoNumeros << rand() << endl;
	}
	arquivoNumeros.close();
}
