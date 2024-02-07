#include <fstream>
#include <iostream>
using namespace std;

 // tipo de formato em que o texto vai estar organizado muito usado é o JSON !!
int main() {
	
	ofstream arquivo; // quando queremos inserir algo no arquivo usamos OFSTREAM 
	
	arquivo.open("dados.txt");
	
    arquivo << "Um oi persistente...";
	
	arquivo.close();
}
 