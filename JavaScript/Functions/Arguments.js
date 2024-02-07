/* quando nao definimos ou defininmos
 uma certa quantidade de parâmetros de uma
  função, podemos usar o Array Arguments para 
  fazer operações e mexer com os dados, 
  independente da quantidade passada por parâmetro
*/

function SomaTudo() {

    let soma = 0;
    for (i in arguments) {
        console.log(typeof arguments[i] , typeof arguments[i] == typeof 1);

        if (!isNaN(arguments[i])) {
            soma += arguments[i];
        }
    }
    console.log(soma);

}
//console.log(isNaN(1));
SomaTudo(1, 2, 3, 4, "oi");

//console.log(typeof 1 == typeof 1);

