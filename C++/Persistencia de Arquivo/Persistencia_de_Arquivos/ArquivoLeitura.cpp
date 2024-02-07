#include <iostream>
#include <fstream>
using namespace std;
main() {
	//Criar uma variável para o arquivo (leitura)
	ifstream arquivoNumeros;
	//Variável int para receber cada número lido do arquivo
	int numero;
	//Variáveis para armazenar o maior e o menor valor
	int maior, menor;
	//Abrir o arquivo numeros.txt
	arquivoNumeros.open("numeros.txt");
	//Ler o primeiro número e atribuir como menor e maior valor
	arquivoNumeros >> numero;
	cout << numero << " ";
	menor = numero;
	maior = numero;
	//Estrutura de repetição para ler todos os valores do arquivo
	do { //good() retorna true enquanto houver dados a serem lidos do arquivo
		//ler o próximo valor do arquivo e armazenar na variável numero
		if (arquivoNumeros.eof()) {
			break;
		}
		arquivoNumeros >> numero;
		//imprimir o número lido na tela
		cout << numero << " ";
		//Teste para verificar se o próximo número é o menor
		if (numero < menor) {
			menor = numero;
		}
		//Teste para verificar se o próximo número é o maior
		if (numero > maior) {
			maior = numero;
		}
	} while(arquivoNumeros.good());
	//Imprimir os valores de menor e maior
	cout << endl;
	cout << "Menor valor: " << menor << endl;
	cout << "Maior valor: " << maior << endl;
}
