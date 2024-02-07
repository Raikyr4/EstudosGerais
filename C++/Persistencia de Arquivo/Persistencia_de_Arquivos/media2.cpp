#include <fstream>
#include <iostream>
#include <string>
using namespace std;
main() {
	setlocale(LC_ALL,"");
	ifstream notas;
	notas.open("NotasCMP.txt");
	cout << "Aluno(a)" << "\t" << "N1" << "\t" << "N2" << "\t" << "Média" << endl;
	while (notas.good()) {

		string nome;
		double n1;
		double n2;
		double media;
		
		notas >> nome >> n1 >> n2 >> media;
		if (notas.eof()) {
			break;
		}
		cout << nome << "\t\t" << n1 << "\t" << n2 << "\t" << media << endl;
	}
	notas.close();
}
