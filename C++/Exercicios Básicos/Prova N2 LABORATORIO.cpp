#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char sexo;
    int N,cont=0,cont2=0;
    float MaiorH=0.0, MenorH=10.0,H,Mf=0.0,Mh=0.0,Maiorf=0.0,Menorf=10.0,Menorg;

cout<<"DIGITE O NUMERO DE PESSOAS A SEREM ANALISADAS : ";
   while(cin>>N)
   {   
        for(int i=0; i<N ;i++)
        {
            cout<<"DIGITE O SEXO E A ALTURA DO INDIVIDUO : ";
            cin>>sexo>>H;
            if(sexo == 'F')
            {
                Mf+=H;
                cont2++;
                if(H>Maiorf)
                {
                    Maiorf=H;
                }
                if(H<Menorf)
                {
                    Menorf=H;
                }
            }
            else
            {
                Mh+=H;
                cont++;
                if(H>MaiorH)
                {
                    MaiorH=H;
                }
                if(H<MenorH)
                {
                    MenorH=H;
                }
            }
         }
         if(Menorf>MenorH)
         {
             Menorg=MenorH;
         }
         else
         {
             Menorg=Menorf;
         }

         if(Maiorf>MaiorH)
         {
             sexo='F';
         }
         else
         {
             sexo='M';
         }
         cout<<endl;
         cout<<fixed<<setprecision(2);

         cout<<"ALTURA MEDIA DOS HOMENS = "<<Mh/(float)cont<<endl;
         cout<<"ALTURA MEDIA DAS MULHERES = "<<Mf/(float)cont2<<endl;
         cout<<"O NUMERO DE HOMENS = "<<cont<<endl;
         cout<<"A MENOR ALTURA DO GRUPO N DE PESSOAS = "<<Menorg<<endl;
         cout<<"SEXO DA PESSOA MAIS ALTA = "<<sexo<<endl;
         cout<<endl;
         cout<<"DIGITE O NUMERO DE PESSOAS A SEREM ANALISADAS : ";

    }
 }
