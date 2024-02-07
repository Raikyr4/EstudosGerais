let valor ; // nao inicializada 
console.log(valor);

let x =null; // agr variavel nao aponta para nenhum end. de memoria e n tem nenhum valor
console.log(x);

const prod = {};

console.log(prod.nome);
console.log(prod);

prod.nome = 'raio';
console.log(prod);

//devemos evitar atribuir undefined à alguma varável

delete prod.nome;
console.log(prod);
