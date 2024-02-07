#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	setlocale(LC_ALL,"");

	long long int Y=0,CPF,CPF2,D1,D2,V1,V2,cont=2;

    cout<<"DIGITE UM CPF SEM ESPAcOS E PONTOS : ";
	cin>>CPF2;
	while(CPF2!=0)
	{
		D2=CPF2%10;/////////
		CPF2=CPF2/10;
		D1=CPF2%10;/////////
		CPF2=CPF2/10;
	
		CPF=CPF2;
		for (int i = 0; i < 10; i++)
        {
            
        }
        
			if(Y%11<2)
			{
				V1=0;
			}
			else
			{
				V1=11-(Y%11);
			}

			CPF=CPF2*10 + V1;
			cont=2;
			Y=0;

		while(CPF/10!=0)
		{
	    	Y+=(CPF%10)*cont;
			cont++;
			CPF=CPF/10;
		}
			if(Y%11<2)
			{
				V2=0;
			}
			else
			{
				V2=11-(Y%11);
			}

			if(D1==V1 && D2==V2)
			{
				  cout<<"CPF EH VALIDO"<<endl;
			}
			else
			{
			   cout<<"CPF INVALIDO"<<endl;
			}
			
			cout<<"DIGITE UM CPF SEM ESPAÇOS E PONTOS : ";
			cin>>CPF2;
			cont=2;
			Y=0;
			
	}

}