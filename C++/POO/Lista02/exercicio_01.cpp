#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class Aluno
{
private:
    unsigned long long int matricula;
    string nome;
    float N1, N2, T;

public:
    Aluno(string name, unsigned long long int mat,float n1,float n2, float t);
    Aluno();
    void set_nome(string name)
    {
        nome = name;
    }
    string get_nome()
    {
        return nome;
    }
    void set_matricula(unsigned long long int mat)
    {
        if (mat != 0)
            matricula = mat;
    }
    unsigned long long int get_matricula()
    {
        return matricula;
    }

    void set_N1(float n1)
    {
        if (n1 >= 0.0 && n1 <= 10.0)
        {
            N1 = n1;
        }
        else
        {
            cout << "Nota Invalida";
        }
    }
    float get_N1()
    {
        return N1;
    }
    void set_N2(float n2)
    {
        if (n2 >= 0.0 && n2 <= 10.0)
        {
            N2 = n2;
        }
        else
        {
            cout << "Nota Invalida";
        }
        N2 = n2;
    }
    float get_N2()
    {
        return N2;
    }
    void set_T(float t)
    {
        T = t;
    }
    float get_T()
    {
        return T;
    }
    string get_dados()
    {
        return "NOME : " + nome + "\n" + "MATRICULA : " + to_string(matricula) + "\n" + "NOTAS : " + to_string(N1) + " " + to_string(N2) + "\n" + "TRABALHO : " + to_string(T);
    }
    float get_media()
    {

        return ((N1 * 2.5) + (N2 * 2.5) + (T * 2)) / 7;
    }
    int Final()
    {
        if (((N1 * 2.5) + (N2 * 2.5) + (T * 2)) / 7.0 >= 6.0)
        {
            return 0;
        }
        else
        {
            return abs((((((N1 * 2.5) + (N2 * 2.5) + (T * 2)) / 7.0) - 6.0) * 7.0)/2.5);
        }
    }
};
Aluno::Aluno(string name, unsigned long long int mat,float n1,float n2, float t)
{
    nome = name;
    matricula = mat;
    N1 =n1;
     N2 = n2;
      T = t;
}
Aluno ::Aluno()
{
    nome = " ";
    matricula = 0;
    N1 = N2 = T = 0.0;
}

int main()
{
    Aluno X;
    string nome;
    unsigned long long int M;
    float n1, n2, t;
    cin >> M ;
    cin>> nome ;
    cin>> n1 >> n2 >> t;
    X.set_nome(nome);
    X.set_matricula(M);
    X.set_N1(n1);
    X.set_N2(n2);
    X.set_T(t);
    cout<<fixed<<setprecision(2);
    cout<<X.get_matricula()<<endl;
    cout<<X.get_nome()<<endl;
    cout<<X.get_media()<<endl;
    cout<<X.get_N1()<<" "<<X.get_N2()<<" "<<X.get_T()<<endl;
    cout<<X.Final()<<endl;

    Aluno X2("Raiky",20221003300433,5.0,5.0,6.0);
    cout<< X2.get_dados()<<endl;
    cout<<"MEDIA DE X2 "<<X2.get_media()<<endl;
    cout<<X2.Final()<<endl;
    

}