#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class OrdenaArray 
{

public:
    void ordenaCresente(int *vec, int tam)
    {
        int i, j, min, aux;
        for (i = 0; i < tam - 1; i++)
        {
            min = i;
            for (j = i + 1; j < tam; j++)
            {
                if (vec[j] < vec[min])
                    min = j;
            }
            aux = vec[i];
            vec[i] = vec[min];
            vec[min] = aux;
        }
    }

    void ordenaDecrescente(int vec[], int tam)
    {
        for (int i = 0; i < tam - 1; i++)
        {
            for (int j = i; j < tam - 1; j++)
            {
                if (vec[i] < vec[j])
                {
                    int temp = vec[i];
                    vec[i] = vec[j];
                    vec[j] = temp;
                }
            }
        }
    }
};
class vetorordenado
{
		vector<int> vet;
	public:
		void ordenarcrescente();
		void ordenasdecrescente();
		void merge(int vet[], int n);
		void insert(int x);
};

void vetorordenado::ordenarcrescente()
{
	sort(vet.begin(), vet.end());
}

void vetorordenado::ordenasdecrescente()
{
	sort(vet.begin(), vet.end(), greater<int>());
}


void vetorordenado::insert(int x)
{
	vet.push_back(x);
	ordenarcrescente();
}

void vetorordenado::merge(int v[], int n)
{
	for(int i=0; i<n; i++)
	{
		vet.push_back(v[i]);
	}
	ordenarcrescente();
}

int main()
{
    int X[8] = {9, 3, 83, 75, 883, 94, 8, 7};
    OrdenaArray P;
    P.ordenaCresente(X, 8);
    for (int i = 0; i < 8; i++)
    {
        cout << X[i] << " ";
    }
    cout << endl;
    P.ordenaDecrescente(X, 8);
    for (int i = 0; i < 8; i++)
    {
        cout << X[i] << " ";
    }
}