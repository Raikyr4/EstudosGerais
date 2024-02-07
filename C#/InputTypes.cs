using System;
using System.Globalization;

namespace TiposDeEnrtrada
{
    public class InputTypes
    {
        public static void Main(string[] args)
        {
            string fraseComEspaco = Console.ReadLine(); //lê string até a quebra de linha
            string[] vet = fraseComEspaco.Split(' '); //dessa forma pegamos todas as palavras da frase e armazemaos no vetor
            for(int i = 0; i < vet.Length; i++)
            {
                Console.WriteLine(vet[i]);  
            }

            //para ler outros tipos de dados sem ser string:

            int X = int.Parse(Console.ReadLine());
            Console.WriteLine(X);

            char Y = char.Parse(Console.ReadLine());
            Console.WriteLine(Y);

            double Z = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture); //se o seu sistema estiver em PT-BR ele lerá so com ',' , ent usamos isso pra que o valo seja lido com '.' apenas
            Console.WriteLine(Z);

            //e assim por diante...

        }
    }
}