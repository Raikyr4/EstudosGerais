using POO;

/*
 * podemos aninhar namespaces dessa forma a baixo 
 * Dessa forma dispensamos o uso do using e o nome da class que usamos em outro programa
 * Além disso, criamos um sistema de hierarquia entre os namespaces 
 * Depois é preciso pesquisar melhor e ver como aki é usado 
 */
namespace POO.ProgramPOO
{
    class Program
    {
        static void Main()
        {
            ContaCorrente minhaConta = new ContaCorrente("João", "123456", 789, "Agência Central", 1000.00);

            minhaConta.ExibirInformacoes(); // Exibir informações iniciais

            minhaConta.Depositar(500.00);   // Realizar um depósito

            minhaConta.Sacar(200.00);       // Realizar um saque

            minhaConta.ExibirInformacoes(); // Exibir informações após operações

            Console.ReadLine();
        }
    }


    //////////////////////////////////////// OBS IMPORTANTES !!! //////////////////////////////////////



    /* a forma a baixo é como podemos realizar herança em C#

        class Teste : ContaCorrente
        {
        }


        não se pode herdar diversas classes mas podemos herdar diversas interfaces
    */

    /*
     * Para realizamos polimorfismo podemos usar os conceitos de:
     * 
     * VIRTUAL e OVERRIDE
     * 
     * VIRTUAL usamos num metodos da classe mae que queremos deixar "modificavel" para as classes filhas 
     * 
     * OVERRIDE usamos nas classes filhas para identificar que o metodo virtual da classe mãe está sendo modificado
     */

    /*
     * a palavra reservada BASE funciona como o SUPER no sistema de classes em JS
     * 
     * 
     * 
     * 
     * 
     * Métodos Abstratos:
     * 
     *   Os métodos abstratos são usados em 
     *   classes abstratas e interfaces para definir 
     *   uma assinatura de método sem fornecer uma implementação. 
     *   As classes derivadas ou as classes que implementam a 
     *   interface devem fornecer uma implementação para esses métodos. 
     */
}
