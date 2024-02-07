using System;
using System.Collections.Generic;

namespace Estruturas
{
    internal class ArrayAndLists
    {
        static void Main(string[] args)
        {

            //Formas de atribuir null a uma variavel
            int? x = null;
            Nullable<int> y = null;


            //Vetores:

            int[] vet = new int[9];

            foreach(int i in vet)
            {
                vet[i] = int.Parse(Console.ReadLine());
            }


            //Matrizes:

            int[][] mat = new int[9][];

            for (int i = 0;i < 9;i++)
            {
               for (int j = 0; j < 9; j++)
                {
                    mat[i][j] = int.Parse(Console.ReadLine());
                }
            }



            //Lists: 

            List<int> numeros = new List<int>();
            numeros.Add(1);
            numeros.Add(2);
            numeros.Add(3);
            numeros.Insert(0, 4);

            numeros.Find(x => x == 1);  //função lambda que retorna o primeiro valor que for igual a 1 (ou o valor que vc colocar)
            numeros.FindLast(x => x == 2); //retorna o ultimo valor igual a 2
            Console.WriteLine(numeros[1]);

            //Queue:

            Queue<string> nomes = new Queue<string>();
            nomes.Enqueue("João");
            nomes.Enqueue("Maria");
            nomes.Enqueue("Pedro");
            Console.WriteLine(nomes.Dequeue());


            //Satck:

            Stack<string> nomesNaPilha = new Stack<string>();
            nomesNaPilha.Push("João");
            nomesNaPilha.Push("Maria");
            nomesNaPilha.Push("Pedro");
            Console.WriteLine(nomesNaPilha.Pop());


            //DataTime and TimeSpan:

                // Cria um objeto DateTime com a data e hora atuais
            DateTime now = DateTime.Now;
            Console.WriteLine("Data e hora atuais: " + now);

                // Cria um objeto DateTime com uma data específica
            DateTime christmas = new DateTime(2024, 12, 25);
            Console.WriteLine("Data de Natal: " + christmas);

                // Cria um objeto TimeSpan com um intervalo de tempo específico
            TimeSpan interval = new TimeSpan(1, 2, 30, 0);
            Console.WriteLine("Intervalo de tempo: " + interval);

                // Adiciona o intervalo de tempo ao objeto DateTime
            DateTime newDate = now.Add(interval);
            Console.WriteLine("Nova data e hora: " + newDate);

        }
    }
}