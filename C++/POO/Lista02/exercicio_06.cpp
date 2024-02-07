#include <iostream>
using namespace std;
class Node
{
public:
    int D;      // tipo de objeto que sera copiado para dentro do Nó
    Node *next; // ponteiro que irá apontar para o Nó seguinte

public:
    static Node *MontaNode(int Date) // método estático que nao roda em cima de um objeto da classe node , ele cria um ponteiro pra node que recebe um novo node que recebe um trem para dentro do seu D e o seu next aponta para null
    {
        Node *P = new Node;
        if (P)
        {
            P->D = Date;
            P->next = 0;
        }
        return P;
    }
    static int DesmontaNode(Node *P) // método estático que nao roda em cima de um objeto da classe node , ele salva o elemento do Nó que será excluído e logo após deleta o Nó que foi alocado e logo em seguida retorna o elemento salvo
    {
        int X;
        if (P)
        {
            X = P->D;
            delete P;
        }
        return X;
    }
};
class VECTOR : public Node
{
public:
    Node *Pi;
    Node *Pf;
    int N;
    int Tam;

public:
    VECTOR(int t);
    ~VECTOR();
    bool insert(int Y)
    {
        Node *aux = Node ::MontaNode(Y);
        if (!Pi)
        {
            Pi = aux;
            Pf = aux;
            if (N < Tam)
            {
                N++;
            }
            else
            {
                if (N >= Tam)
                {
                    N++;
                    Tam++;
                }
            }
            return true;
        }
        else
        {
            Pf->next=aux;
            Pf = aux;
            if (N < Tam)
            {
                N++;
            }
            else
            {
                if (N >= Tam)
                {
                    N++;
                    Tam++;
                }
            }
            return true;
        }
        return false;
    }
    int get(int Da)
    {
        Node *P = Pi;
        if (Da >= 0 && Da <= Tam)
        {
            for (int i = 0; i < Da; i++)
            {
                P = P->next;
            }
            if (P)
            {
                return P->D;
            }
            return 0;
        }
        return 0;
    }
    int size()
    {
        if (!N)
        {
            return 0;
        }
        return N;
    }
};

VECTOR::VECTOR(int t)
{
    Pi = Pf = 0;
    N = 0;
    Tam = t;
}

VECTOR::~VECTOR()
{
    Node *aux;
    while (Pi)
    {
        aux = Pi->next;
        Node ::DesmontaNode(Pi);
        Pi = aux;
    }
}

int main()
{
    VECTOR X(10);
    for(int i=0;i<10;i++)
    {
        X.insert(i);
    }
    cout<<X.get(5)<<endl;
    cout<<"quantidade de elementos : "<<X.size()<<endl;
    X.insert(10);
    cout<<"quantidade de elementos : "<<X.size()<<endl;
    cout<<X.get(10)<<endl;
    cout<<X.get(0)<<endl;
    for(int i=0;i<=10;i++)
    {
        cout<<X.get(i)<<" ";
    }
}