// IIFE -> Immediately Invoked Function Expression


//definimos a função de maneira Anonima 
(function() {
    console.log('Será executado na hora!')
    console.log('Foge do escopo mais abrangente!')
})()//acessamos assim  função = ()


/*usamos esse "método" para quando mexermos na web 
evitarmos acessar o espoco global do window*/