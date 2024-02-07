#include <iostream>
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <utility>
  
using namespace std;

class questao
{	
		int gabarito;
		string alt1, alt2;
		string enunciado;
	public:
		questao();
		int getgabarito();
		string getenunciado();
		string getalternativa1();
		string getalternativa2();
		void setgabarito(int x);
		void setenunciado(string x);
		void setalternativa1(string x);
		void setalternativa2(string x);
		string tostring(int x);
};

questao::questao()
{
	alt1=alt2=enunciado="";
	gabarito=0;
}

int questao::getgabarito()
{
	return gabarito;
}

string questao::getenunciado()
{
	return enunciado;
}

string questao::getalternativa1()
{
	return alt1;
}

string questao::getalternativa2()
{
	return alt2;
}

void questao::setgabarito(int x)
{
	gabarito=x;
}

void questao::setenunciado(string x)
{
	enunciado=x;
}
	
void questao::setalternativa1(string x)
{
	alt1=x;
}

void questao::setalternativa2(string x)
{
	alt2=x;
}

string questao::tostring(int x)
{
	string a=to_string(x);
	return a;
}
class Prova
{
		int acerto, erro, n;
		double notas;
	public:
		Prova();
		void respostaaluno(questao x, int a);
		int acertos();
		int erros();
		int nota();
};

Prova::Prova()
{
	acerto=erro=n=notas=0;
}

void Prova::respostaaluno(questao x, int a)
{
	if(x.getgabarito()==a)
	{
		acerto++;
	}
	else
	{
		erro++;
	}
	n++;
}

int Prova::acertos()
{
	return acerto;
}

int Prova::erros()
{
	return erro;
}

int Prova::nota()
{
	notas=double(acerto)/n;
	return notas;
}

int main()
{

}