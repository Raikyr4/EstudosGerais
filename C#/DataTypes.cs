using System;


namespace TiposDeVariaveis
{
    //uma internal class quer dizer que essa classe não pode ser exportada
    //pois ela só roda em um mesmo assembly 
    internal class DataTypes
    {
        static void Main(string[] args)
        {
            // Tipos primitivos (próprios da linguagem C#):


            /*
             *   Embora os tipos primitivos em C# não 
             *  tenham propriedades ou métodos, é possível chamar 
             *  métodos em variáveis de tipos primitivos, como no 
             *  exemplo que você forneceu. Isso ocorre porque o 
             *  compilador converte automaticamente o valor do tipo 
             *  primitivo em um objeto System.String para que o 
             *   método ToString() possa ser chamado
             */
            sbyte n1 = sbyte.MinValue; n1.ToString();
            short n2 = short.MinValue;
            int n3 = int.MinValue;
            long n4 = long.MinValue;
            byte n5 = byte.MinValue;
            float n6 = float.MinValue; // ou  se formos atribuir valores nele fazemos : float f = 40.0F; colocamos o F no final
            double n7 = double.MinValue;
            decimal n8 = decimal.MinValue;  // bom para contas financeiras 
            char n9 = char.MinValue;     // usa códigos unicode e não da tabela ASCII
            bool n0 = false;
            string frase = "Hello World!";  // "é imutavel" quando atribuimos um novo valor estamos alocando um novo lugar na mermoria onde a variável 'frase' irá apontar.
            object tipoVar = "variável de inferência";

            // Tipos Objetos (.NET framewokr) :

            /*todas as variaveis não primitivas possuem um leque de metodos que podem ser chamados
            todos esses metodos são das suas respectivas classes presente no namespace Sysyem; */

            SByte obj1 = new SByte();
            Int16 obj2 = new Int16();
            Int32 obj3 = new Int32();
            Int64 obj4 = new Int64();
            Byte obj5 = new Byte();
            Single obj6 = new Single();  // é como se fosse um float 
            Double obj7 = new Double();
            Decimal obj8 = new Decimal();
            Char obj9 = new Char();
            String frase2;
            Object algumaCoisa = new Object();
        }
    }
}


// restições para dar nome de variaveis :

/*
 *     # PARAMETROS e VARIAVEIS DENTRO DE METODOS       ==>  Camel Case ( exemploDeNome )
 *     
 *     # NAMESPACES , CLASSES , PROPRIETIES , ATRIBUTOS e METODOS   ==>  Pascal Case ( ExemploDeNome )
 *     
 *     # ATRIBUTOS INTERNOS("PRIVATES") DAS CLASSES     ==>  Padrão ( _exemploDeNome )
 *      
 */


/*
 * 
 * Nós podemos fazer diversos tipos de conversões entre tipos primitivos e tambem entre objetos 
 * 
 * basta pesquisar ou fazer um casting
 * 
 
 
 */
