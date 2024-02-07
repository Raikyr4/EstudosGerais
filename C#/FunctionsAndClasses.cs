using System;
using System.Globalization;

namespace Funcoes
{
    //Uma instância de uma classe é um ponteiro para um objeto na memoria que tem todods os atributops alocados
    public class Carro //deve ser colocada fora do programa principal, mas está aqui só de exemplo
    {

        //Atributos de um objeto da classe Carro
        private string _marca;
        private string _modelo;
        private int _ano;
        private string _cor;

        //Properties get e set podem ser ou não implementadas, ficando a criterio do programador 
        public string Marca
        {
            get { return _marca; }
            set { _marca = value; }
        }

        public string Modelo
        {
            get { return _modelo; }
            set { _modelo = value; }
        }

        public int Ano
        {
            get { return _ano; }
            set { _ano = value; }
        }

        public string Cor
        {
            get { return _cor; }
            set { _cor = value; }
        }



        //metodos do objeto da classe Carro
        public Carro(string marca, string modelo, int ano, string cor)
        {
            _marca = marca;
            _modelo = modelo;
            _ano = ano;
            _cor = cor;
        }
        ~Carro() { }//Destrutor

        /*
         * Toda Classe em C# É UMA SUBCLASSE DA CLASSE Obejct
         * 
         * Logo, temos os metodos disponiveis para todas as classes que formos criar :
         * 
         *  -> GetType
         *  -> Equals
         *  -> GetHashCode
         *  -> Tostring
         *  
         */

        public override string ToString()  //usamos o conceito de override para realizar a sobreposição de metodos já existentes
        {
            return Marca;
        }

        public void ExibirDados()
        {
            Console.WriteLine("Marca: " + Marca);
            Console.WriteLine("Modelo: " + Modelo);
            Console.WriteLine("Ano: " + Ano);
            Console.WriteLine("Cor: " + Cor);
        }


        /*
         * Uma Maneira mais interesante de inicializar um obj :
         * 
         *      Carro monstro = new Carro() {
         *          Marca = "frod".
         *          Ano = 2009,
         *          Cor = "preto",
         *          Modelo = "HB20"
         *      }
         */
    }

    public class FunctionsAndClasses // no caso métodos
    {
        int Soma(int x, int y) // dessa forma eu preciso declarar no main um objeto da minha classe Functions
        {
            
            return x + y;
        }


        static int Soma3(int x, int y ,int z)  // pode rodar sem a instancia de um objeto da classe em questão
        {
            return x + y + z;
        }


        public static void Main(string[] args)
        {

            FunctionsAndClasses obj = new FunctionsAndClasses(); 
            obj.Soma(5 , 4);
            Console.WriteLine(obj);
            Console.WriteLine(Soma3(1,2,3));
        }
    }
}

/*
    OBS : o debug funciona assim como no devTools do navegador.

    OBS : Como debugar o seu codigo em C# no VisualStudio:

        -> F9  - marcar/desmarcar breakpoint ou marcar com mouse mesmo 
        -> F5  - iniciar/continuar o debug
        -> F10 - executar um passo (pula função)
        -> F11 - executar um passo (entra função)
        -> SHIFT + F11 - sair do metodo em execução
        -> SHIFT + F5  - parar o debug


    Janelas que vão aparecer no debug:

        -> Watch (expressões personalizadas)
        -> Autos (expressões "interessantes" detectadas pelo VS)
        -> Locals (variaveis locais)
        ->Diagnostic Tools (condição da memoria e processador)
 
 */
