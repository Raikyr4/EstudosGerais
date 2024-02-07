/**Destructuring Assignment is a JavaScript expression 
 * that allows to unpack values from arrays, or properties
 *  from objects, into distinct variables data can be extracted 
 * from arrays, objects, nested objects and assigning to variables. */

// usando o formato : "...random"
{
    {
        [x, y, ...restof] = [10, 20, 30, 40, 50];
        console.log(x); // 10
        console.log(y); // 20
        console.log(restof); // [30, 40, 50]
    }

    console.log();

    {
        var [firstName, , ...lastName] = ["alpha", "beta", "gamma", "delta"];

        console.log(firstName);//"alpha"
        console.log(lastName);//"gamma, delta"
    }

}

console.log();
//Usando com functions 
{
    function NamesList() {
        return ["alpha", "beta", "gamma", "delta"]
    }
    var [firstName, secondName] = NamesList();

    console.log(firstName);//"alpha"
    console.log(secondName);//"beta"

}

//usando para Objetos 
{
    // quase toda vez é preciso conhecer bem a estrutura (métodos e atributos) dos objetos sujeitos a 
    console.log();
    {
        ({ x, y } = { x: 10, y: 20 });
        console.log(x); // 10
        console.log(y); // 20
    }
    console.log();
    {
        ({ x, y, ...restof } = { x: 10, y: 20, m: 30, n: 40 });
        console.log(x); // 10
        console.log(y); // 20
        console.log(restof); // {m: 30, n: 40}
    }
    console.log();
    {
        var marks = { x: 21, y: -34, z: 47 };

        const { x, y, z } = marks; // x = 21, y = -34, z = 47

        console.log(x);
        console.log(y);
        console.log(z);
    }
    console.log();
    {
        const marks = {
            section1: { alpha: 15, beta: 16},
            section2: { alpha: -31, beta: 19 }
            };
            const { section1 : { alpha: alpha1, beta: beta1 }} = marks;
            console.log(alpha1, beta1); // 15, 16
    }

}




