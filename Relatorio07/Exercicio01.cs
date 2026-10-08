using System;

public class CombatenteDeGondor
{
    public string Nome { get; private set; }
    public string Povo { get; private set; }
    public string Posto { get; private set; }
    public string Armamento { get; private set; } = "Desarmado";
    public CombatenteDeGondor(string nome, string povo, string posto)
    {
        Nome = nome;
        Povo = povo;
        Posto = posto;
    }
    public void Equipar(string arma)
    {
        Armamento = arma;
    }
    public void ApresentarUnidade()
    {
        Console.WriteLine("\nNome: " + Nome);
        Console.WriteLine("Povo: " + Povo);
        Console.WriteLine("Posto: " + Posto);

        if (Armamento != "Desarmado")
        {
            Console.WriteLine("Armamento: " + Armamento);
        }
    }
}

public class Program
{
    public static void Main()
    {
        CombatenteDeGondor c1 = new CombatenteDeGondor("Aragorn", "Homem", "Capitão");
        CombatenteDeGondor c2 = new CombatenteDeGondor("Boromir", "Homem", "Soldado");
        CombatenteDeGondor c3 = new CombatenteDeGondor("Faramir", "Homem", "Comandante");

        c1.Equipar("Espada");
        c2.Equipar("Arco");

        c1.ApresentarUnidade();
        c2.ApresentarUnidade();
        c3.ApresentarUnidade();
    }
}
