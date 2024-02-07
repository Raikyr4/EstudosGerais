#include <iostream>
#include"Agenda.h"
#include "Pessoa.h"
using namespace std;

int main()
{
   Agenda <Pessoa> K;
   Pessoa P1("raiky","11/09/2003","62 984356925");
   Pessoa P2("alexandre","11/09/2003","62 984356925");
   Pessoa P3("Pedro","11/09/2003","62 984356925");
   Pessoa P4("Joao","11/09/2003","62 984356925");
   K.ADCIONAR(P1);
   K.ADCIONAR(P2);
   K.ADCIONAR(P3);
   K.ADCIONAR(P4);
   K.BUSCA_TODOS();
   K.DELETAR("62 984356925");
   cout<<endl<<endl<<endl;
   K.BUSCA_TODOS();
}