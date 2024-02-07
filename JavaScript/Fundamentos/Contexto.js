const X = 9.0; // aki X possui um contexto 

function num(){
    const X = 8; // aki X possui outro contexto definido pelo bloco em que ele está
    return X;
}

{
    const X = 0 ;
    console.log(X);
}

console.log(num());


// o compilador identifica tais contextos e compila sem erro 
