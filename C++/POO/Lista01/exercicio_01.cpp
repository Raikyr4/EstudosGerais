#include <iostream>
#include <string>
using namespace std;
class Pessoa
{
   private:
      int idade;
      float altura;
      string nome;

   public:
   Pessoa(int id, float al, string str);
   Pessoa();

   void set_idade(int idade)
   {
      this -> idade = idade;
   }
   void set_altura(int altura)
   {
      this->altura = altura;
   }
   void set_nome(string nome)
   {
      this->nome=nome;
   }
   int get_idade()
   {
      return idade;
   }
   float get_altura()
   {
      return altura;
   }
   string get_nome()
   {
      return nome;
   }
   string get_dados()
   {
      return nome +" "+to_string(idade)+" "+to_string(altura);
   }
};
 Pessoa :: Pessoa(int id, float al, string str)
{
   idade=id;
   altura=al;
   nome=str;
}
Pessoa :: Pessoa()
{
   idade=0;
   altura=0.0;
   nome=" ";
}


int main()
{
   Pessoa P;
   int X;
   float Y;
   string N;
   cout<<P.get_dados()<<endl;
   cin>>X;
   P.set_idade(X);
   cin>>Y;
   P.set_altura(Y);
   getline(cin,N);
   P.set_nome(N);
   cout<<P.get_dados()<<endl;
   Pessoa P2(4,1.50,"Pedro");
   cout<<P2.get_dados()<<endl;
   

}
