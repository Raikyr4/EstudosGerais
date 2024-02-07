#include <iostream>
#include "Agenda.h"
#include "Pessoa.h"
using namespace std;
int main()
{
  Agenda <Pessoa> K;
  Pessoa P1("raiky", "11/09/2003", "62 984356925");
  Pessoa P2("alexandre", "11/09/2003", "62 984356625");
  Pessoa P3("Pedro", "11/09/2003", "62 9843569925");
  Pessoa P4("Joao", "11/09/2003", "62 9843567925");

  K.ADCIONAR(P1);
  K.ADCIONAR(P2);
  K.ADCIONAR(P3);
  K.ADCIONAR(P4);
  cout << endl
       << endl;
  cout << " ADICIONOU 4 PESSOAS NA LISTA TELEFONICA" << endl;
  cout << "BUSCA TODOS : " << endl;
  K.BUSCA_TODOS();
  cout << endl;

  P1.set_nome("ZEZIN");
  if (K.ALTERAR_PESSOA(P1))
  {
    cout << "PESSOA ALTERADA " << endl
         << endl;
  }
  else
  {
    cout << " PESSOA NAO FOI ALTERADA " << endl
         << endl;
  }
  cout << "PESSOA BUSCADA : ";
  K.BUSCA_PESSOA("62 984356925");
  cout << endl;
  cout << "BUSCA TODOS : " << endl;
  K.BUSCA_TODOS();
  cout << endl;
  K.DELETAR("Pedro");
  cout << " UMA PESSOA FOI DELETADA  !! " << endl
       << endl;
  cout << "BUSCA TODOS : " << endl;
  K.BUSCA_TODOS();
  cout << endl; 

}