 /* Todas os tipos de variáveis detectam
  o tipo de dados que é atribuido a elas 
  TIPAGEM DINÂMICA / TIPAGEM FRACA 
  (não é tão restrito igual java ou C++)
*/

/*VAR ->  é um tipo de variável que não 
precisa ser declarada antes de ser 
usada , pode ser redeclarada e nao possui 
um Block Scope restringindo a sua 
usabilidade, apenas quando está dentro de um function, quando é declarada dentro de um for ela ainda vale fora dele*/

X = 3; //Number 
var nome = "Raiky"; // String
console.log(nome);
var nome = "Henrique";

//LET e CONST  ->  são tipos de variáveis que precisa ser declarada antes de ser usada , não pode ser redeclarada e possui um Block Scope restringindo a sua usabilidade
{
    let Y = 3.0;
    const Z = 3.14;  // nao pode ser alterada em nenhum momento depois 

    //can use nome and X where

    console.log(X+Y);
    console.log(nome);
     Y = "sim";
    console.log(Y); // exemplo da tipagem fraca
}

verdade = true;
zero  = null;


//método para ver o tipo de dado da variável
console.log(typeof X);
console.log(typeof nome);
console.log(typeof verdade);
console.log(typeof zero);

//cant use Y and Z where

