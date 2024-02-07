#include <iostream>
using namespace std;
class Tv
{
    private:
        unsigned int Canal;
        unsigned int Volume;
    public:
        Tv();
        void set_canal(int C)
        {
            if(C<200 && C>0)
           {
               Canal=C;
           }
           else
           {
            cout<<"ERROR"<<endl;
           }
          
        }
        void TrocaVolume(char X)
        {
            if(Volume>0 && Volume<100)
            {
                if(X=='+' )Volume++;
                else if( X=='-' )Volume--;
            }
             else
             {
                Volume=0;
               cout<<"Impossible"<<endl;
             }
                
        }
        void trocaCanal(char Y)
        {
           if(Canal<200 && Canal>0)
           {
                if(Y=='+')Canal++;
                else if (Y=='-')Canal--;
           }
           else
           {
             Canal=1;
             cout<<"Impossible"<<endl;
           }
        }
        string get_dados()
        {
            return "VOLUME : "+to_string(Volume)+"\n"+"CANAL : "+to_string(Canal);
        }
};

Tv::Tv()
{
    Canal=1;
    Volume=50;
}

int main()
{
    Tv P;
    P.TrocaVolume('+');
    P.trocaCanal('+');
    cout<<P.get_dados()<<endl;
    P.set_canal(150);
    P.TrocaVolume('-');
    P.TrocaVolume('-');
    cout<<P.get_dados()<<endl;
    P.set_canal(200);
    P.set_canal(199);
    P.trocaCanal('+');
    P.trocaCanal('+');
    cout<<P.get_dados();
}