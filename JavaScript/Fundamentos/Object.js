//um Object funciona como um par chave/valor ;
//ele é baseado no formato TEXTUAL Jason, por isso é parecido

const objeto = {}; //como instanciar um objc vazio

// os atributos podem ser criados dinamicamente ou nao 
objeto.nome = "celular";
objeto.preco = 1000;
objeto["marca"] = "apple"

console.log(objeto);


let objc2 = {inicio: "ola", resto :" eu sou um objeto" }
console.log(objc2);


// passando a referencia de memoria ...
// isso só ocorre com Objects , tipos primitivos n 

let a = objeto;
a.marca = "sansumg";
console.log(objeto);

// podemos criar uma function para q seja um Construtor de um object

function x(nom)
{
   this.name = nom;
}

const X = new x("raio");
console.log(X.name);
console.log(X);
