/*// tudo é função  
console.log(typeof Object);

class produto {};
console.log(typeof produto);
*/


// funciona como uma função normal como em C++ e JAVA

//como criar uma função...
function soma(N, N2)
{
    return N+N2;
}

X = soma(2,3);
console.log(X);


const dividir = function (a,b){
    console.log(a/b);
}

//armazenando uma função ARROW / Lamda em uma variavel 

const multipica = (a,b) => { return a*b}; // ou apenas a*b se for só uma sentença de código

console.log(multipica(2,3)); 


/**Criamos um objeto a partir de uma função 
 *  também podemos , partir das funções , criar 
 * uma classe e instanciar um obj com new 
 * 
*/
