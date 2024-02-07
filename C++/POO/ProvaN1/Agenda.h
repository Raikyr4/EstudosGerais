#include <fstream>
#include "NodeDP.h" // CLASSES.h
#include <iostream>
using namespace std;
template <typename T>
class Agenda
{
private:
  NodeDP<T> *Head;
  NodeDP<T> *it;
  int N;

public:
  Agenda()
  {
    NodeDP<T> *P;
    while (Head)
    {
      P = Head->next;
      NodeDP<T>::DesmontaNodeDP(Head);
      Head = P;
    }
  }
  ~Agenda()
  {
    N = 0;
    Head = 0;
  }
  bool ADCIONAR(T X)
  {
    NodeDP<T> *P = NodeDP<T>::MontaNodeDP(X);
    if (!P)
      return false;
    if (!Head)
    {
      Head = it = P->next = P->previous = P;
    }
    else
    {
      P->previous = Head->previous;
      P->next = Head;
      (Head->previous)->next = P;
      Head->previous = P;
      Head = P;
    }
    N++;
    NodeDP<T> **PP = &Head;
    int cont = 1;
    ofstream arq1;
    arq1.open("Agenda.txt");
    while (cont <= N)
    {
      arq1 << cont << ")  { 'NOME' : " << ((*PP)->D).get_nome() << " , 'DATA DE NASCIMENTO' : " << ((*PP)->D).get_dataNascimento() << " , CONTATO : " << ((*PP)->D).get_fone() << " }" << endl;
      PP = &((*PP)->next);
      cont++;
    }
    arq1.close();
    return true;
  }

  T DELETAR(string X)
  {
    T R;
    NodeDP<T> *Aux;
    it = Head;
    int j = 0;
    while (j != N && it->D.get_nome() != X)
    {
      it = it->next;
    }
    if (!Head)
      return R;
    Aux = it;
    if (it->next != it)
    {
      (it->next)->previous = it->previous;
      (it->previous)->next = it->next;
    }
    else
    {
      Head = 0;
    }
    if (Head == it)
    {
      Head = it = it->next;
    }
    else
    {
      it = it->next;
    }
    N--;
    R = NodeDP<T>::DesmontaNodeDP(Aux);
    NodeDP<T> **P = &Head;
    int cont = 1;
    ofstream arq;
    arq.open("Agenda.txt");
    while (cont <= N)
    {
      arq << cont << " { 'NOME' : " << ((*P)->D).get_nome() << " , 'DATA DE NASCIMENTO' : " << ((*P)->D).get_dataNascimento() << " , CONTATO : " << ((*P)->D).get_fone() << " }" << endl;
      P = &((*P)->next);
      cont++;
    }
    arq.close();
    return R;
  }

  bool ALTERAR_PESSOA(T X)
  {
    NodeDP<T> *P = Head;
    int cont = 1;
    bool ok = false;
    while (cont <= N && (P->D).get_fone() != X.get_fone())
    { // procura ate achar ou até acabar
      P = P->next;
      cont++;
    }
    if (cont <= N)
    {
      ok = true;
      P->D.set_nome(X.get_nome());
      P->D.set_telefone(X.get_fone());
      P->D.set_data(X.get_dataNascimento());
    }
    ofstream arq;
    arq.open("Agenda.txt");
    P = Head;
    cont = 1;
    while (cont <= N)
    {
      arq << cont << ")  { 'NOME' : " << (P)->D.get_nome() << " , 'DATA DE NASCIMENTO' : " << ((P)->D).get_dataNascimento() << " , CONTATO : " << (P)->D.get_fone() << " }" << endl;
      P = ((P)->next);
      cont++;
    }
    arq.close();
    return ok;
  }

  void BUSCA_TODOS()
  {
    ifstream arq;
    arq.open("Agenda.txt");
    string X;
    while (arq.good())
    {
      getline(arq, X);
      cout << X << endl;
    }
    arq.close();
  }

  void BUSCA_PESSOA(string fone)
  {
    NodeDP<T> *P = Head;
    int i;
    bool tem = false;
    string X = "A PESSOA BUSCADA NAO EXISTE !";
    for (i = 1; i <= N; i++, P = P->next)
    {
      if (fone == P->D.get_fone())
      {
        X = "";
        X += to_string(i) + ")  { 'NOME' : " + (P)->D.get_nome() + " , 'DATA DE NASCIMENTO' : " + ((P)->D).get_dataNascimento() + " , CONTATO : " + (P)->D.get_fone() + " }";
        tem = true;
      }
    }
    if (tem)
    {
      cout << X << endl;
    }
    else
    {
      cout << "PESSOA NAO ENCONTRADA " << endl;
    }
  }

  int size()
  {
    return N;
  }
};