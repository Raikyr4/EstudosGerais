// Tipo Boolean e oque gera verdadeiro ou falso 

let isAtivo = false;
console.log(isAtivo);

isAtivo = true;
console.log(isAtivo);

isAtivo = "1"; // 
console.log(!!isAtivo,); /* Usando os princípios da logica computacional podemos utilizar os operadores lógicos para verificar se um number/String é true ou false */


console.log("\n", "os verdadeiros...")
console.log(!!2);
console.log(!!-1);
console.log(!!' ');
console.log(!![]);
console.log(!!{});
console.log(!! Infinity);
console.log(!!(isAtivo = true));


console.log("\n", "os falsos...")
console.log(!!0);
console.log(!!''); //string vazia
console.log(!!null);
console.log(!!NaN); // not a number 
console.log(!!undefined);
console.log(!!(isAtivo = false));



//usando operadores lógicos no hr de imprimir
let X = null || 0;
console.log(X || "desconhecido");

X = null || 1;
console.log(X || "desconhecido");






