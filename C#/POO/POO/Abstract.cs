public abstract class Animal
{
    // Atributos
    public int Vida { get; set; }
    public double Peso { get; set; }

    // Método implementado
    public void Comer()
    {
        Console.WriteLine("Animal comendo...");
    }

    // Método implementado
    public void Andar()
    {
        Console.WriteLine("Animal andando...");
    }

    // Método abstrato a ser implementado pelas subclasses
    public abstract void FazerBarulho();
}

public class Cachorro : Animal
{
    // Implementação do método abstrato
    public override void FazerBarulho()
    {
        Console.WriteLine("Cachorro latindo...");
    }
}

public class Gato : Animal
{
    // Implementação do método abstrato
    public override void FazerBarulho()
    {
        Console.WriteLine("Gato miando...");
    }
}


/*
   * Métodos Abstratos:
   * 
   *   Os métodos abstratos são usados em 
   *   classes abstratas e interfaces para definir 
   *   uma assinatura de método sem fornecer uma implementação. 
   *   As classes derivadas ou as classes que implementam a 
   *   interface devem fornecer uma implementação para esses métodos. 
   */