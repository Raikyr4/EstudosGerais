// namespaces saõ importantes para a organização dos projetos e também são usados para importar classes entre os programas e projetos
namespace POO
{
    class ContaCorrente
    {

        //Membros estáticos em C# referem-se a campos, 
        //propriedades, métodos ou eventos 
        //que pertencem à própria classe, em vez de 
        //pertencerem a instâncias específicas da classe. 

        public static int NumeroDeInstancias = 0;
        // aumenta toda vez que eu quiser


        //devemos lembrar de outros metodos de acesso tipo internal(é o padrão), protected , private e public
        // Propriedades autoimplementadas públicas com acesso a atributos privados
        // é sempre bom deixar a proriedade set privada e apenas o get publico
        public string Titular { get; private set; }
        public string Conta { get; private set; }
        public int NumeroAgencia { get; private set; }
        public string NomeAgencia { get; private set; }
        public double Saldo { get; private set; }

        // Construtor
        public ContaCorrente(string titular, string conta, int numeroAgencia, string nomeAgencia, double saldoInicial)
        {
            Titular = titular;
            Conta = conta;
            NumeroAgencia = numeroAgencia;
            NomeAgencia = nomeAgencia;
            Saldo = saldoInicial;
        }

        // Métodos públicos para interagir com as propriedades
        public void Depositar(double valor)
        {
            Saldo += valor;
            //para usar a interpolação de strings devemos usar a sintaxe a baico
            //:C formata o valor como uma moeda. 
            // devemos sempre colocar entre {} o nome da variavel que será interpolada
            Console.WriteLine($"Depósito de {valor:C} realizado. Novo saldo: {Saldo:C}");
        }

        // Método para realizar varios depósitos de uma vez
        // para esse metodo podemos passar uma quantidade ideterminada de valores 
        // usamos a sintaxe params para que isso seja possível
        public void VariosDepositos(params double[] valores)
        {
            foreach (var valor in valores)
            {
                Saldo += valor;
                Console.WriteLine($"Depósito de {valor:C} realizado. Novo saldo: {Saldo:C}");
            }
        }

        public void Sacar(double valor)
        {
            if (valor > Saldo)
            {
                Console.WriteLine("Saldo insuficiente para realizar o saque.");
            }
            else
            {
                Saldo -= valor;
                Console.WriteLine($"Saque de {valor:C} realizado. Novo saldo: {Saldo:C}");
            }
        }

        public void ExibirInformacoes()
        {
            Console.WriteLine($"Titular: {Titular}");
            Console.WriteLine($"Número da Conta: {Conta}");
            Console.WriteLine($"Número da Agência: {NumeroAgencia}");
            Console.WriteLine($"Nome da Agência: {NomeAgencia}");
            Console.WriteLine($"Saldo: {Saldo:C}");
        }
    }
}
