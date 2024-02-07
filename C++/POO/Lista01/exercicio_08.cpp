#include <iostream>
#include <cmath>
using namespace std;
class Triangulo
{
    private:
        float A, B, C;
    public:
        Triangulo(float a,float b, float c );

        string get_Tipo()
        {
            
            float AUX;
            if (A > B)
            {
                AUX = A;
                A = B;
                B = AUX;
            }

            if (A > C)
            {
                AUX = A;
                A = C;
                C = AUX;
            }

            if (B > A)
            {
                AUX = B;
                B = A;
                A = AUX;
            }

            if (B > C)
            {
                AUX = B;
                B = C;
                C = AUX;
            }

            if (C > A)
            {
                AUX = C;
                C = A;
                A = AUX;
            }

            if (C > B)
            {
                AUX = C;
                C = B;
                B = AUX;
            }
         if(A>=(B+C))
         {
            cout<<"NAO FORMA TRIANGULO"<<endl;
         }
         else
         {
            if ((A * A) == (B * B) + (C * C))
            {
                cout << "TRIANGULO RETANGULO";
            }
            else
            {
                if ((A * A) > (B * B) + (C * C))
                {
                    cout << "TRIANGULO OBTUSANGULO";
                }
                else
                {
                    if ((A * A) < (B * B) + (C * C))
                    {
                        cout << "TRIANGULO ACUTANGULO";
                    }
                }
            }

            if (A == B && B == C)
            {
                cout << " EQUILATERO" << endl;
            }

            else
            {
                if (A == B || B == C || C == A)
                {
                    cout << " ISOSCELES" << endl;
                }
                else
                {
                    cout<<" ESCALENO"<<endl;
                }
            }
          }
        }
        float get_area()
        {
            float P=(A+B+C)/2;
            return sqrt(P*(P-A)*(P-B)*(P-C));
        }
        float get_perimetro()
        {
            return A+B+C;
        }
};

Triangulo::Triangulo(float a,float b, float c)
{
    if (a >= (b + c))
    {
        A=0.0;
        B=0.0;
        C=0.0;
    }
    else
    {
        A=a;
        B=b;
        C=c;
    }
}

int main()
{
    Triangulo P1(7.0,5.0,7.0);
    Triangulo P2(6.0,6.0,10.0);
    Triangulo P3(6.0,6.0,6.0);
    P1.get_Tipo();
    cout<<"Area de P1 : "<<P1.get_area()<<endl;
    cout<<"Perimetro de P1 : "<<P1.get_perimetro()<<endl;

    P2.get_Tipo();
    cout<<"Area de P2 : "<<P2.get_area()<<endl;
    cout<<"Perimetro de P2 : "<<P2.get_perimetro()<<endl;

    P3.get_Tipo();
    cout<<"Area de P3 : "<<P3.get_area()<<endl;
    cout<<"Perimetro de P3 : "<<P3.get_perimetro()<<endl;


    Triangulo P4(5.0,7.0,2.0);
    cout<<P4.get_Tipo();
   
}