#include <iostream>
#include <cmath>
using namespace std;
class Circulo
{
    private:
        int X;
        int Y;
        float R;
    public:
        Circulo();
        Circulo(int X, int Y, float R);

        void set_centro(int X,int Y)
        {
            this->X=X;
            this->Y=Y;
        }
        void set_Raio(float R)
        {
            this->R=R;
        }
        void set_raioplus(int P)
        {
            R+=R*(1+P/100);
        }
        float get_area()
        {
            return 3.14*R*R;
        }
        int get_dist(int x,int y)
        {
            cout<<"Distancia do centro ("<<X<<","<<Y<<") ate o ponto ("<<x<<","<<y<<") = ";
            return sqrt((X-x)*(X-x)+(Y-y)*(Y-y));
        }
        float get_circun()
        {
            return 2*3.14*R;
        }
        string get_dados()
        {
            return "\nCENTRO ("+to_string(X)+","+to_string(Y)+")\n"+"RAIO : "+to_string(R)+"\n"+"AREA : "+to_string( 3.14*R*R);
        }

};

Circulo::Circulo(int X, int Y, float R)
{
    this->X=X;
    this->Y=Y;
    this->R=R;
}

Circulo::Circulo()
{
    X=Y=0;
    R=0.0;
}

int main()
{
   Circulo C;
   cout << C.get_dados()<<endl;
   Circulo C1(3,4,5);
   cout << C1.get_dados()<<endl;
   cout <<C1.get_dist(5,6)<<endl;
   C1.set_raioplus(50);
   cout<<C1.get_dados()<<endl;
   cout<<C1.get_circun()<<endl;
   cout<<C1.get_area()<<endl;

}