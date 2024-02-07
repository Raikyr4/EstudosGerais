#include <iostream>

using namespace std;


class data
{
		int dia,mes,ano;
		
		public:
		
		data(int x,int y, int z);
		int getdia();
		int getmes();
		int getano();
		void setdia(int x);
		void setmes(int x);
		void setano(int x);
		string tostring();
		int compara(int x, int y, int z);
		string getmesextenso();
		bool isbissexto();
		
		
};

data::data(int x,int y, int z)
{
	if((y==1||y==3||y==5||y==7||y==8||y==10||y==12) && x<=31)
	{
		dia=x;
		mes=y;
		ano=z;
	}
	else
	{
		if((y==4||y==6||y==9||y==11) && x<=30)
		{
			dia=x;
			mes=y;
			ano=z;
		}
		else
		{
			if((y==2) && ((z%4 != 0 && z%100==0) && (z%400 != 0)) && x<=28)
			{
				dia=x;
				mes=y;
				ano=z;
			}
			else
			{
				if((y==2) && ((z%4 == 0 && z%100 !=0) || (z%400 == 0)) && x<=28)
				{
					dia=x;
					mes=y;
					ano=z;
				}
				else
				{
					dia=1;
					mes=1;
					ano=1;
				}
			}
		}
	}
}

int data::getdia()
{
	return dia;
}

int data::getmes()
{
	return mes;
}

int data::getano()
{
	return ano;
}

void data::setdia(int x)
{
	dia=x;
}

void data::setmes(int x)
{
	mes=x;
}

void data::setano(int x)
{
	ano=x;
}

string data::tostring()
{
	return "dia: " + to_string(dia) + "\n" + "mes: " + to_string(mes) + "\n" + "ano: " + to_string(ano) ;
}

int data::compara(int x, int y, int z)
{
	if(x==dia && y==mes && z==ano)
	{
		return 0;
	}
	
	if(ano>z)
	{
		return 1;
	}
	else
	{
		if(ano==z)
		{
			if(mes>y)
			{
				return 1;
			}
			else
			{
				if(mes==y)
				{
					if(dia>x)
					{
						return y;
					}
				}
			}
		}
	}
	return -1;
}

string data::getmesextenso()
{
	if(mes==1)
	{
		return "Janeiro";
	}
	else
	{
		if(mes==2)
		{
			return "Fevereiro";
		}
		else
		{
			if(mes==3)
			{
				return "Março";
			}
			else
			{
				if(mes==4)
				{
					return "Abril";
				}
				else
				{
					if(mes==5)
					{
						return "Maio";
					}
					else
					{
						if(mes==6)
						{
							return "Junho";
						}
						else
						{
							if(mes==7)
							{
								return "Julho";
							}
							else
							{
								if(mes==8)
								{
									return "Agosto";
								}
								else
								{
									if(mes==9)
									{
										return "Setembro";
									}
									else
									{
										if(mes==10)
										{
											return "Outubro";
										}
										else
										{
											if(mes==11)
											{
												return "Novembro";
											}
											else
											{
												return "Dezembro";
											}
										}
									}
								}
							}
						}
					}		
				}
			}
		}
	}
}

bool data::isbissexto()
{
	if((ano%4 == 0 && ano%100 !=0) || (ano%400 == 0))
	{
		return true;
	}
	return false;
}
