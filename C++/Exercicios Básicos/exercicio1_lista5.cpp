//exercicio 1 da lista 5 de repetiçâo;

//incluindo bibliotecas
#include<iostream>
#include<iomanip>
using namespace std;
int main() {

     setlocale(LC_ALL,"");//para utilizar pontuação no programa 
     
     //introduzindo as variáveis int e string 
     
     int n,soma,controle;//n são os números inteiro e controle é o número limite 
     string repetir="S";
     
     //estrutura de repetição while
     while(repetir=="S"||repetir=="s")
     {
     
     n=1;
     soma=0;
     
     //entrando com o número limite 
     cout<<"Entre com o número limite a ser somado a partir de 1: "<<endl;
     cin>>controle;
     
     //estrutura de repetição while 
     while(n<=controle)
     {
     soma=soma+n;
     n++;
     }
     
     //imprimindo a saída do programa 
     
	 cout<<"A soma dos "<<controle<<" primeiros números é: "<<soma<<endl;
     cout<<"Deseja continuar S para sim e N para não:"<<endl;//condição de parada 
     cin>>repetir;
     
     system("cis");//para limpar a tela
     
     }
    
    }
    
    //Nomes dos participantes do grupo : Vitor Hugo Franco Lopes Azevedo; Henrique Meireles; Raike Sabah.
    
