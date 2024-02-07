#include <iostream>
#include <vector>
#include <iomanip>
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
struct DataDeNascimento
{
    int dia;
    int mes;
    int ano;
};

struct Pessoa
{
    string nome;
    int idade;
    float altura;
    float peso;
    DataDeNascimento data;
};

struct PessoaFuncionario
{
    Pessoa x;
    float salario;
    int horasSemanais;
};

void ImprimeMenu()
{
    system("cls");
    cout << "       ###############################################" << endl;
    cout << "       ##                                           ##" << endl;
    cout << "       ##      [Selecione uma operacao]             ##" << endl;
    cout << "       ##                                           ##" << endl;
    cout << "       ##   1  - INSERIR DADOS DA PESSOA            ##" << endl;
    cout << "       ##   2  - VER INFORMACOES                    ##" << endl;
    cout << "       ##   3  - SAIR                               ##" << endl;
    cout << "       ###############################################" << endl;
    cout << endl;
    cout << "Digite a opcao: ";
}

bool ValidaDados(PessoaFuncionario alguem)
{
    bool pIdade, pNome, pAltura, pPeso, pData, pSalario, pHoras, pBissexto;
    pIdade = pNome = pAltura = pPeso = pData = pSalario = pHoras = pBissexto = false;

    if (alguem.x.nome.size() <= 100)
        pNome = true;
    if (alguem.x.altura > 0.0 && alguem.x.altura <= 3.0)
        pAltura = true;
    if (alguem.x.peso > 0.0 && alguem.x.peso <= 250.0)
        pPeso = true;
    if (alguem.salario > 0.0)
        pSalario = true;
    if (alguem.horasSemanais > 0 && alguem.horasSemanais <= 100)
        pHoras = true;
    if (alguem.x.data.ano % 4 == 0 || alguem.x.data.ano % 100 == 0 || alguem.x.data.ano % 400 == 0)
        pBissexto = true;
    if (alguem.x.data.ano > 0 && alguem.x.data.ano < 2023)
    {
        switch (alguem.x.data.mes)
        {
        case JANEIRO:
            if (alguem.x.data.dia > 0 && alguem.x.data.dia <= 31)
                pData = true;
            break;
        case FEVEREIRO:
            if ((alguem.x.data.dia > 0 && alguem.x.data.dia <= 29 && pBissexto) || (alguem.x.data.dia > 0 && alguem.x.data.dia <= 28 && !pBissexto))
                pData = true;
            break;
        case MARCO:
            if (alguem.x.data.dia > 0 && alguem.x.data.dia <= 31)
                pData = true;
            break;
        case ABRIL:
            if (alguem.x.data.dia > 0 && alguem.x.data.dia <= 30)
                pData = true;
            break;
        case MAIO:
            if (alguem.x.data.dia > 0 && alguem.x.data.dia <= 31)
                pData = true;
            break;
        case JUNHO:
            if (alguem.x.data.dia > 0 && alguem.x.data.dia <= 30)
                pData = true;
            break;
        case JULHO:
            if (alguem.x.data.dia > 0 && alguem.x.data.dia <= 31)
                pData = true;
            break;
        case AGOSTO:
            if (alguem.x.data.dia > 0 && alguem.x.data.dia <= 31)
                pData = true;
            break;
        case SETEMBRO:
            if (alguem.x.data.dia > 0 && alguem.x.data.dia <= 30)
                pData = true;
            break;
        case OUTUBRO:
            if (alguem.x.data.dia > 0 && alguem.x.data.dia <= 31)
                pData = true;
            break;
        case NOVEMBRO:
            if (alguem.x.data.dia > 0 && alguem.x.data.dia <= 30)
                pData = true;
            break;
        case DEZEMBRO:
            if (alguem.x.data.dia > 0 && alguem.x.data.dia <= 31)
                pData = true;
            break;
        default:
            break;
        }
    }

    if (alguem.x.idade > 0 && alguem.x.idade <= 105 && (alguem.x.idade == (2023 - alguem.x.data.ano)) && pData)
        pIdade = true;

    if (pIdade && pNome && pAltura && pPeso && pData && pSalario && pHoras)
        return true;

    if (!pIdade)
        cout << "IDADE INVALIDA !" << endl;
    if (!pNome)
        cout << "NOME INVALIDO ! " << endl;
    if (!pAltura)
        cout << "ALTURA INVALIDA ! " << endl;
    if (!pPeso)
        cout << "PESO INVALIDO !" << endl;
    if (!pData)
        cout << "DATA INVALIDA !" << endl;
    if (!pSalario)
        cout << "SALARIO INVALIDO !" << endl;
    if (!pHoras)
        cout << "HORAS SEMANAIS INVALIDA !" << endl;
    return false;
}

void VerInfo(vector<PessoaFuncionario> Lista)
{
    for (int i = 0; i < Lista.size(); i++)
    {
        cout << "PessoaFuncionario " << i + 1 << " : " << endl
             << endl;
        cout << "       # Nome  ->  " << Lista[i].x.nome << endl;
        cout << "       # Idade  ->  " << Lista[i].x.idade << " anos" << endl;
        cout << "       # Peso  ->  " << Lista[i].x.peso << " Kg" << endl;
        cout << "       # Altura  ->  " << Lista[i].x.altura << " m" << endl;
        cout << "       # Data de Nascimento  ->  " << Lista[i].x.data.dia << '/' << Lista[i].x.data.mes << '/' << Lista[i].x.data.ano << endl;
        cout << "       # Salario  ->  R$ " << fixed << setprecision(2) << Lista[i].salario << endl;
        cout << "       # Horas Semanais  ->  " << Lista[i].horasSemanais << " Horas" << endl
             << endl;
    }
}

int main()
{
    int opcao;
    bool sistemaAtivo = true;
    vector<PessoaFuncionario> Lista;

    ImprimeMenu();
    while (sistemaAtivo)
    {
        PessoaFuncionario alguem;

        cin >> opcao;
        cin.ignore();
        switch (opcao)
        {
        case 1:

            cout << "Digite o nome da pessoa : ";
            cin >> alguem.x.nome;
            cout << "Digite a idade : ";
            cin >> alguem.x.idade;
            cout << "Digite a altura em metros : ";
            cin >> alguem.x.altura;
            cout << "Digite o peso em Kg: ";
            cin >> alguem.x.peso;
            cout << "Digite a Data de Nascimento (dia/mes/ano) : ";
            cin >> alguem.x.data.dia >> alguem.x.data.mes >> alguem.x.data.ano;
            cout << "Digite o Salario : R$ ";
            cin >> alguem.salario;
            cout << "Digite a Quantidade de Horas Trabalhadas na Semana : ";
            cin >> alguem.horasSemanais;
            cout << endl;

            if (ValidaDados(alguem))
            {
                Lista.push_back(alguem);
                cout << "Tecle ENTER para continuar ..." << endl;
                cin.ignore();
                break;
            }
            else
            {
                cout << "Insira novamente !" << endl;
                cout << "Tecle ENTER para continuar ..." << endl;
                cin.ignore();
                break;
            }
        case 2:
            VerInfo(Lista);
            cout << "Tecle ENTER para continuar ..." << endl;
            cin.ignore();
            break;
        case 3:
            sistemaAtivo = false;
            break;
        default:
            break;
        }

        cin.ignore();
        ImprimeMenu();
    }
    return 0;
}