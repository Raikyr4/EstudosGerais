/* Programinha em C++ que checa se um número de CPF é válido
validacpf.cpp - abr/2013 - Fernando Bolonhezi Giannasi
Modificação do Script Referência: http://leowgweb.wordpress.com/2012/05/06/algoritmo-de-validacao-de-cpf */

#include <iostream>
using namespace std;

bool validaCPF(const int * const); //protótipo da função que checa o CPF, retorna true ou false

int main(void)
{
    int cpf[11];
    char input[12];

    cout << "Digite o número do CPF sem pontos, espaços ou traços:" << endl;
    cin.getline(input, 12, '\n');

    for(char i = 0; i < 11; i++)
    {
        cpf[i] = static_cast<int>(input[i] - 48); //Convertendo char para valor absoluto segundo tabela ASCII e passando para array de inteiros//

        if(cpf[i] < 0 || cpf[i] > 9){ //Validando a entrada de dados
            cout << "ENTRADA INVÁLIDA" << endl;
            return 1;}
    }

    cout << "\nO CPF digitado foi: " << endl;
    for(char i = 0; i < 11; i++)
    {
        cout << cpf[i];
        if(i == 2 || i == 5)
            cout << ".";
        if(i == 8)
            cout << "-";
    }

    cout << "\n\n";

    if(validaCPF(cpf) == true)
        cout << "O CPF digitado É válido" << endl;

    else
        cout << "O CPF digitado NÃO É VÁLIDO" << endl;

    return 0;
}

inline bool validaCPF(const int * const cpf)
{
    int digito1,
        digito2,
        temp = 0;

    /*Obtendo o primeiro digito verificador:

    Os 9 primeiros algarismos são multiplicados pela sequência 10, 9, 8, 7, 6, 5, 4, 3, 2
    (o primeiro por 10, o segundo por 9, e assim por diante);
    Em seguida, calcula-se o resto “r1″ da divisão da soma dos resultados das multiplicações por 11,
    e se o resto for zero ou 1, digito é zero, caso contrário digito = (11-r1) */
    
    for(char i = 0; i < 9; i++)
        temp += (cpf[i] * (10 - i));

    temp %= 11;

    if(temp < 2)
        digito1 = 0;
    else
        digito1 = 11 - temp;

    /*Obtendo o segundo digito verificador:

    O dígito2 é calculado pela mesma regra, porém inclui-se o primeiro digito verificador ao final
    da sequencia. Os 10 primeiros algarismos são multiplicados pela sequencia 11, 10, 9, ... etc...
    (o primeiro por 11, o segundo por 10, e assim por diante);
    procedendo da mesma maneira do primeiro digito*/

    temp = 0;
    for(char i = 0; i < 10; i++)
        temp += (cpf[i] * (11 - i));

    temp %= 11;

    if(temp < 2)
        digito2 = 0;
    else
        digito2 = 11 - temp;

    /* Se os digitos verificadores obtidos forem iguais aos informados pelo usuário,
       então o CPF é válido */

    if(digito1 == cpf[9] && digito2 == cpf[10])
        return true;
    else
        return false;
}