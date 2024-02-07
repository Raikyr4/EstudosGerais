#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
		setlocale(LC_ALL,"");// Função usada para adicionar acentuação no programa
		
		int X;
		int Fx;
		int Gx;
		float Hx;
		int Fg;
		
		cout<<"Dadas as equações : F(x)= 2X^2+3X , G(x)= raiz quadrada de 3X^2 + 4 , H(x)=1/X : "<<endl;
		cout<<" Calcule : "<<endl;
		cout<<" -a) F(x) + G(x) "<<endl;
		cout<<"-b) F(x) * H(x) "<<endl;
		cout<<"-c) F(G(x)) "<<endl;
		
		cout<<"insira o valor de X : ";
		cin>>X;
		cout<<"resultados : "<<endl;
		
		Fx=2*pow(X,2)+3*X;
		Gx= sqrt(3*pow(X,2)+4);
		Hx=1/X;
		Fg=2*pow(Gx,2)+3*Gx;
		
		cout<<fixed<<setprecision(1);
		cout<<" -a) F(x) + G(x) = "<<Fx<<endl;
		cout<<"-b) F(x) * H(x) = "<<Fx*Hx<<endl;
		cout<<"-c) F(G(x)) = "<<Fg<<endl;
		
}
