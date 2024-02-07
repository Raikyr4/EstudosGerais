using System;
using System.Globalization;

namespace OutTypes
{
    class TiposDeSaida
    {
        static void Main(string[] args)
        {

            double x = 10.35784;
            int y = 32;
            string z = "Maria";
            char w = 'F';

            Console.WriteLine("Bom dia!");
            Console.Write("Olá mundo!");

            Console.WriteLine();
            Console.WriteLine(x);
            Console.WriteLine(x.ToString("F2")); // como definir a quantidade de casas decimais 
            Console.WriteLine(x.ToString("F4"));
            Console.WriteLine(x.ToString("F2", CultureInfo.InvariantCulture)); // como trocar a notação  ',' por '.'

            Console.WriteLine();
            Console.WriteLine("RESULTADO = " + x);
            Console.WriteLine("O valor do troco é " + x + " reais");
            Console.WriteLine("O valor do troco é " + x.ToString("F2") + " reais");

            Console.WriteLine();
            Console.WriteLine("A paciente " + z + " tem " + y + " anos e seu sexo é: " + w);
            
            Console.WriteLine("{0} tem {1} anos e tem saldo igual a 1000.00$", z, y); // é uma maneira de usar a interpolação
        }
    }
}
