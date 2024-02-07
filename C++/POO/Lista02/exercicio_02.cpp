#include <iostream>
#include <string>
//#include "exercicio_02Alternativo.h"      <<<<===== se nao compilar o exxercicio 2 no main vai pra esse alternativo !!
using namespace std;
class Data
{
private:
   int Dia;
   int Mes;
   int Ano;

public:
   Data(int DD, int MM, int AA);
   void set_ano(int A)
   {
      if (A > 0)
      {
         Ano = A;
      }
   }
   void set_mes(int M)
   {
      if (M > 0 && M<=12)
      {
         Mes = M;
      }
   }
   void set_dia(int D)
   {
      if (D > 0 && D<=31)
      {
         Dia = D;
      }
   }

   int get_dia()
   {
      return Dia;
   }
   int get_mes()
   {
      return Mes;
   }
   int get_ano()
   {
      return Ano;
   }

   void get_data()
   {
      if (Mes < 10 && Dia < 10 && Ano < 10)
      {
         cout<< "0" + to_string(Dia) + "/" + "0" + to_string(Mes) + "/" + "000" + to_string(Ano);
      }
      else
      {
         if (Mes < 10 && Dia < 10)
         {
            cout<< "0" + to_string(Dia) + "/" + "0" + to_string(Mes) + "/" + to_string(Ano);
         }
         else
         {
            if (Dia < 10 && Ano < 10)
            {
               cout<< "0" + to_string(Dia) + "/" + to_string(Mes) + "/" + "000" + to_string(Ano);
            }
            else
            {
               if (Mes < 10 && Ano < 10)
               {
                  cout<< to_string(Dia) + "/" + "0" + to_string(Mes) + "/" + "000" + to_string(Ano);
               }
               else
               {
                  if (Mes < 10)
                  {
                     cout<< to_string(Dia) + "/" + "0" + to_string(Mes) + "/" + to_string(Ano);
                  }
                  else
                  {
                     if (Dia < 10)
                     {
                        cout<< "0" + to_string(Dia) + "/" + to_string(Mes) + "/" + to_string(Ano);
                     }
                     else
                     {
                        if (Ano < 10)
                        {
                           cout<< to_string(Dia) + "/" + to_string(Mes) + "/" + "000" + to_string(Ano);
                        }
                        else
                        {
                           cout<< to_string(Dia) + "/" + to_string(Mes) + "/" + to_string(Ano);
                        }
                     }
                  }
               }
            }
         }
      }
   }
   int compara(Data X)
   {
      int A = X.get_ano();
      int M = X.get_mes();
      int D = X.get_dia();
      if (D > 0 && M > 0 && A > 0)
      {
         if (D == Dia && M == Mes && A == Ano)
         {
            return 0;
         }
         else
         {
            if (D == Dia && M == Mes && A > Ano || D > Dia && M == Mes && A == Ano || D == Dia && M > Mes && A == Ano)
            {
               return 1;
            }
            else
            {
               return -1;
            }
         }
      }
   }
   string get_mes_extenso()
   {
      if (Mes== 1)
         return "Janeiro";
      if (Mes== 2)
         return "Fevereiro";
      if (Mes== 3)
         return "Março";
      if (Mes== 4)
         return "Abril";
      if (Mes== 5)
         return "Maio";
      if (Mes== 6)
         return "Junho";
      if (Mes== 7)
         return "Julho";
      if (Mes== 8)
         return "Agosto";
      if (Mes== 9)
         return "Setembro";
      if (Mes== 10)
         return "Outubro";
      if (Mes== 11)
         return "Novembro";
      if (Mes== 12)
         return "Dezembro";
   }
   bool IsBissexto()
   {
      if (Ano % 4 == 0 || Ano % 400 == 0)
      {
         return true;
      }
      return false;
   }
};

Data::Data(int DD, int MM, int AA)
{
   if (DD <= 31 && DD > 0 && MM > 0 && MM <= 12 && AA > 0)
   {
      if (MM == 1 || MM == 3 || MM == 5 || MM == 7 || MM == 8 || MM == 10 || MM == 12)
      {
         Dia = DD;
         Mes = MM;
         Ano = AA;
      }
   }
   else
   {
      if (DD <= 30 && DD > 0 && MM > 0 && MM <= 12 && AA > 0)
      {
         if (MM == 4 || MM == 6 || MM == 9 || MM == 11)
         {
            Dia = DD;
            Mes = MM;
            Ano = AA;
         }
         else
         {
            Dia = 1;
            Mes = 1;
            Ano = 1;
         }
      }
   }
}

int main()
{
   Data X(11,9,2003);
   Data Y(10,5,8);
   cout<<"SOBRE X : "<<endl;
   cout<<X.get_mes_extenso()<<endl;
   cout<<X.get_ano()<<endl;
   cout<<X.get_mes()<<endl;
   cout<<X.get_dia()<<endl;
   X.get_data();
   if(X.IsBissexto()==true)
   {
      cout<<"DATA X É BISSEXTA "<<endl;
   }
   cout<<X.compara(Y)<<endl;
   Y.set_ano(2022);
   Y.set_dia(1);
   Y.set_mes(11);
   cout<<Y.get_mes();
   Y.get_data();
   Data Z(40,50,2022);
   Z.get_data();



}
