// é COMO array/vetor normal como em C++ e Java

// Nao possui um tamanho fixo, e aceita diversos valores, objetos e até mesmo funções mas é sempre bom manter o vetor heterogêneo 

const Valores = [1,2,3,4,5,6,7,8,9];

//posso percorre com um loop o 
for(let i=0; i<9; i++)
{
   Valores[i]+=1;
}
//ou apenas imprimir 
console.log(Valores);

console.log(Valores[9]); // nao gera erro , mas retorna um undefined
console.log(`O tamanho é ${Valores.length}`) // é o size

Valores.push({id:3}, true , false , "texto"); // add item
Valores.pop(); //retira e retorna o último valor do array
delete Valores[0];// deleta um item 

console.log(Valores);

//Array é considerado um Object , por isso possui métodos 

