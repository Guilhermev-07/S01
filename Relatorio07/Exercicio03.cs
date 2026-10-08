using System;
using System.Collections.Generic;

public class Grimorio
{
    public string FeiticoFavorito { get; set; } = "Nenhum";
    public void Abrir()
    {
        Console.WriteLine("Feitiço favorito: " + FeiticoFavorito);
    }
}

public class Companheiro
{
    public string Nome { get; set; }
    public string Funcao { get; set; }

    public Companheiro(string nome, string funcao)
    {
        Nome = nome;
        Funcao = funcao;
    }
    public void Apresentar()
    {
        Console.WriteLine(Nome + " - " + Funcao);
    }
}

public class Maga
{
    public string Nome { get; set; }
    public Grimorio Grimorio { get; set; }
  
    private List<Companheiro> companheiros;

    public Maga(string nome)
    {
        Nome = nome;
        Grimorio = new Grimorio();
        companheiros = new List<Companheiro>();
    }

    public void Recrutar(Companheiro c)
    {
        companheiros.Add(c);
    }

    public void MostrarGrupo()
    {
        Console.WriteLine("\nGrupo da " + Nome + ":");
        foreach (Companheiro c in companheiros)
        {
            c.Apresentar();
        }
    }
}

public class Program
{
    public static void Main()
    {
        Companheiro c1 = new Companheiro("Stark", "Guerreiro");
        Companheiro c2 = new Companheiro("Fern", "Maga");
        Maga frieren = new Maga("Frieren");

        frieren.Recrutar(c1);
        frieren.Recrutar(c2);

        frieren.Grimorio.FeiticoFavorito = "Magia de Cura";

        frieren.MostrarGrupo();
        frieren.Grimorio.Abrir();
    }
}
