const nome = "Rebeca";
const concat = "olá " + nome + "!";


//Usando tamplate string posso fazer coisas como quebras de linhas

const Tam = `  ola
 ${nome}!`;
     
console.log(Tam);

//posso fazer expressões também

console.log(`1 + 1 = ${1+1}`);

//tudo que está ente {} vai ser oque eu quero juntar no tamplate, podendo ser uma função lambada que será executada ou algo do tipo 

