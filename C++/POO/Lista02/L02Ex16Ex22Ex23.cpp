#include <iostream>
#include <vector>

using namespace std;

enum Meses
{
    ZERO,
    JANEIRO,
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO,
    NOVEMBRO,
    DEZEMBRO
};

class Data
{
protected:
    int dia, mes, ano;

public:
    void InicializaData(int umDia, int umMes, int umAno)
    {
        if (DataEhValida(umDia, umMes, umAno))
        {
            dia = umDia;
            mes = umMes;
            ano = umAno;
        }
        else
        {
            dia = 0;
            mes = 0;
            ano = 0;
        }
    }
    int getDia() { return dia; }
    int getMes() { return mes; }
    int getAno() { return ano; }

    bool DataEhValida(int UmDia, int UmMes, int UmAno)
    {
        bool pBissexto, pData;
        pBissexto = pData = false;
        if (UmAno % 4 == 0 || UmAno % 100 == 0 || UmAno % 400 == 0)
            pBissexto = true;
        if (UmAno > 0 && UmAno < 2023)
        {
            switch (UmMes)
            {
            case JANEIRO:
                if (UmDia > 0 && UmDia <= 31)
                    pData = true;
                break;
            case FEVEREIRO:
                if ((UmDia > 0 && UmDia <= 29 && pBissexto) || (UmDia > 0 && UmDia <= 28 && !pBissexto))
                    pData = true;
                break;
            case MARCO:
                if (UmDia > 0 && UmDia <= 31)
                    pData = true;
                break;
            case ABRIL:
                if (UmDia > 0 && UmDia <= 30)
                    pData = true;
                break;
            case MAIO:
                if (UmDia > 0 && UmDia <= 31)
                    pData = true;
                break;
            case JUNHO:
                if (UmDia > 0 && UmDia <= 30)
                    pData = true;
                break;
            case JULHO:
                if (UmDia > 0 && UmDia <= 31)
                    pData = true;
                break;
            case AGOSTO:
                if (UmDia > 0 && UmDia <= 31)
                    pData = true;
                break;
            case SETEMBRO:
                if (UmDia > 0 && UmDia <= 30)
                    pData = true;
                break;
            case OUTUBRO:
                if (UmDia > 0 && UmDia <= 31)
                    pData = true;
                break;
            case NOVEMBRO:
                if (UmDia > 0 && UmDia <= 30)
                    pData = true;
                break;
            case DEZEMBRO:
                if (UmDia > 0 && UmDia <= 31)
                    pData = true;
                break;
            default:
                break;
            }
        }
 
        if (pData)
            return true;

        return false;
    }

    void MostraData()
    {
        cout << "DATA EH : " << dia << '/' << mes << '/' << ano << endl;
    }

    static Data DuplicaData(Data date, Data outra)
    {
        outra.InicializaData(date.dia, date.mes, date.ano);
        return outra;
    }

    bool VemAntes(Data data1, Data data2)
    {

        if (data1.ano < data2.ano)
        {
            return true;
        }
        else if (data1.ano > data2.ano)
        {
            return false;
        }
        else if ((data1.ano == data2.ano) && data1.mes < data2.mes)
        {
            return true;
        }
        else if ((data1.ano == data2.ano) && data1.mes > data2.mes)
        {
            return false;
        }
        else if ((data1.ano == data2.ano) && (data1.mes == data2.mes) && data1.dia < data2.dia)
        {
            return true;
        }
        else if ((data1.ano == data2.ano) && (data1.mes == data2.mes) && data1.dia > data2.dia)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};

int main()
{
    Data aniversario;
    aniversario.InicializaData(11, 9, 2003);
    aniversario.MostraData();
    Data outroAniversario;
    outroAniversario = Data ::DuplicaData(aniversario, outroAniversario);
    outroAniversario.MostraData();
}
