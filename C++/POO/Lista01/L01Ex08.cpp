#include <iostream>
#include <iomanip>
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
struct DataDePublicacao
{
    int dia;
    int mes;
    int ano;
};
struct Livro
{
    string titulo;
    DataDePublicacao publicacao;
    string autor;
    float preco;
    bool pedido;
};
struct InventarioDeLivros
{
    vector<Livro> ListaDeLivros;
    int totalDeLivros;
    int totalDeLivrosEmPedidos;
};

void ImprimeMenu()
{
    system("cls");
    cout << "       ###############################################" << endl;
    cout << "       ##                                           ##" << endl;
    cout << "       ##      [Selecione uma operacao]             ##" << endl;
    cout << "       ##                                           ##" << endl;
    cout << "       ##   1  - INSERIR LIVRO                      ##" << endl;
    cout << "       ##   2  - PESQUISAR LIVRO                    ##" << endl;
    cout << "       ##   3  - VER INVERNTARIO                    ##" << endl;
    cout << "       ##   4  - SAIR                               ##" << endl;
    cout << "       ###############################################" << endl;
    cout << endl;
    cout << "Digite a opcao: ";
}

void PesquisarLivro(string titulo, vector<Livro> lista)
{
    bool tem = false;
    for (int i = 0; i < lista.size(); i++)
    {
        if (titulo == lista[i].titulo)
        {
            tem = true;
            cout << fixed << setprecision(2);
            cout << endl
                 << "{ LIVRO : " << lista[i].titulo << " , AUTOR : " << lista[i].autor << " , DATA DE PUBLICACAO : " << lista[i].publicacao.dia << '/' << lista[i].publicacao.mes << '/' << lista[i].publicacao.ano << " , PRECO : R$ " << lista[i].preco << " }" << endl;
        }
    }
    if (!tem)
    {
        cout << endl
             << " O livo em questao nao esta disponivel no Inventario " << endl;
    }
}

void VerInventario(InventarioDeLivros baseDeDados)
{

    cout << endl
         << "LIVROS EM PEDIDOS  :  " << baseDeDados.totalDeLivrosEmPedidos << endl
         << "TOTAL DE LIVROS    : " << baseDeDados.totalDeLivros << endl;
    cout << endl
         << "------------LISTA DE LIVROS------------" << endl
         << endl;

    for (int i = 0; i < baseDeDados.ListaDeLivros.size(); i++)
    {
        cout << fixed << setprecision(2);
        cout << i + 1 << " => { LIVRO : " << baseDeDados.ListaDeLivros[i].titulo << " , AUTOR : " << baseDeDados.ListaDeLivros[i].autor << " , DATA DE PUBLICACAO : " << baseDeDados.ListaDeLivros[i].publicacao.dia << '/' << baseDeDados.ListaDeLivros[i].publicacao.mes << '/' << baseDeDados.ListaDeLivros[i].publicacao.ano << " , PRECO : R$ " << baseDeDados.ListaDeLivros[i].preco << " }" << endl;
    }
}

bool ValidaDados(Livro qualquer)
{
    bool pTitulo, pAutor, pData, pPreco, pBissexto;
    pTitulo = pAutor = pData = pPreco = pBissexto = false;

    if (qualquer.autor.size() <= 100)
        pAutor = true;
    if (qualquer.titulo.size() <= 150)
        pTitulo = true;
    if (qualquer.preco > 0.0)
        pPreco = true;
    if (qualquer.publicacao.ano % 4 == 0 || qualquer.publicacao.ano % 100 == 0 || qualquer.publicacao.ano % 400 == 0)
        pBissexto = true;
    if (qualquer.publicacao.ano > 0 && qualquer.publicacao.ano <= 2023)
    {
        switch (qualquer.publicacao.mes)
        {
        case JANEIRO:
            if (qualquer.publicacao.dia > 0 && qualquer.publicacao.dia <= 31)
                pData = true;
            break;
        case FEVEREIRO:
            if ((qualquer.publicacao.dia > 0 && qualquer.publicacao.dia <= 29 && pBissexto) || (qualquer.publicacao.dia > 0 && qualquer.publicacao.dia <= 28 && !pBissexto))
                pData = true;
            break;
        case MARCO:
            if (qualquer.publicacao.dia > 0 && qualquer.publicacao.dia <= 31)
                pData = true;
            break;
        case ABRIL:
            if (qualquer.publicacao.dia > 0 && qualquer.publicacao.dia <= 30)
                pData = true;
            break;
        case MAIO:
            if (qualquer.publicacao.dia > 0 && qualquer.publicacao.dia <= 31)
                pData = true;
            break;
        case JUNHO:
            if (qualquer.publicacao.dia > 0 && qualquer.publicacao.dia <= 30)
                pData = true;
            break;
        case JULHO:
            if (qualquer.publicacao.dia > 0 && qualquer.publicacao.dia <= 31)
                pData = true;
            break;
        case AGOSTO:
            if (qualquer.publicacao.dia > 0 && qualquer.publicacao.dia <= 31)
                pData = true;
            break;
        case SETEMBRO:
            if (qualquer.publicacao.dia > 0 && qualquer.publicacao.dia <= 30)
                pData = true;
            break;
        case OUTUBRO:
            if (qualquer.publicacao.dia > 0 && qualquer.publicacao.dia <= 31)
                pData = true;
            break;
        case NOVEMBRO:
            if (qualquer.publicacao.dia > 0 && qualquer.publicacao.dia <= 30)
                pData = true;
            break;
        case DEZEMBRO:
            if (qualquer.publicacao.dia > 0 && qualquer.publicacao.dia <= 31)
                pData = true;
            break;
        default:
            break;
        }
    }

    if (pTitulo && pAutor && pData && pPreco)
        return true;

    if (!pTitulo)
        cout << "TITULO INVALIDA !" << endl;
    if (!pAutor)
        cout << "NOME INVALIDO ! " << endl;
    if (!pData)
        cout << "DATA INVALIDA !" << endl;
    if (!pPreco)
        cout << "PRECO INVALIDO !" << endl;
    return false;
}

int main()
{

    int opcao;
    bool sistemaAtivo = true;
    InventarioDeLivros InventarioDeLivros;
    InventarioDeLivros.totalDeLivros = InventarioDeLivros.totalDeLivrosEmPedidos = 0;
    ImprimeMenu();
    while (sistemaAtivo)
    {
        string nomeDeUmLivro;
        Livro qualquer;
        cin >> opcao;
        cin.ignore();
        switch (opcao)
        {
        case 1:
            cout << "Digite o Titulo do livro a ser inserido : ";
            getline(cin, qualquer.titulo);
            cout << "Digite o Autor do livro : ";
            getline(cin, qualquer.autor);
            cout << "Digite a Data de Publicacao (dai/mes/ano): ";
            cin >> qualquer.publicacao.dia >> qualquer.publicacao.mes >> qualquer.publicacao.ano;
            cout << "Digite o Preco do Livro : R$ ";
            cin >> qualquer.preco;

            // gera um dado aletório para um ter um pedido ou nao
            for (int i = 0; i < 10; i++)
            {
                qualquer.pedido = rand() % 2;
            }

            ValidaDados(qualquer);

            InventarioDeLivros.ListaDeLivros.push_back(qualquer);

            if (qualquer.pedido)
            {
                InventarioDeLivros.totalDeLivrosEmPedidos++;
            }
            InventarioDeLivros.totalDeLivros++;

            cout << endl
                 << "Tecle ENTER para continuar ... " << endl;
            cin.ignore();
            cin.ignore();
            break;
        case 2:
            cout << "Digite o Livro que vc esta procurando : ";
            cin >> nomeDeUmLivro;
            PesquisarLivro(nomeDeUmLivro, InventarioDeLivros.ListaDeLivros);
            cout << endl
                 << "Tecle ENTER para continuar ... " << endl;
            cin.ignore();
            cin.ignore();
            break;
        case 3:
            VerInventario(InventarioDeLivros);
            cout << endl
                 << "Tecle ENTER para continuar ... " << endl;
            cin.ignore();
            break;
        case 4:
            sistemaAtivo = false;
            break;
        default:
            break;
        }
        ImprimeMenu();
    }
    return 0;
}
