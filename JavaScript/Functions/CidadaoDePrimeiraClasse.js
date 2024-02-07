//Fução em JS é First-Class Object 
//Higher-order function
//functions são tratados com um dado qualquer em JS

//Parâmetros e retornos são opcionais nas funções

//criar de forma literal 
function soma(){console.log(5+5)};

//Armazenar em : uma varável, um array, um object

let F = function(a){console.log(a)};

const array=[];
array.push(F);

const Pessoa = {}
Pessoa.falar = function() {console.log('eu sou uma pessoa ... ou será que não')};

Pessoa.falar();

// passando funções como parâmetro 

function run(soma)
{
    soma();
}
run(soma);

function run2(F)
{
    F("sei la");
}
run2(F);





