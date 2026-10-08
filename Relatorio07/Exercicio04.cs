using System;
using System.Collections.Generic;

public class EntidadeCosmica
{
    public string Nome { get; set; }
    public string Origem { get; set; } = "Desconhecida";

    public EntidadeCosmica(string nome)
    {
        Nome = nome;
    }
    public virtual void Manifestar()
    {
        Console.WriteLine(Nome + " se manifestou.");
        if (Origem != "Desconhecida")
        {
            Console.WriteLine("Origem: " + Origem);
        }
    }
}

public class Profundo : EntidadeCosmica
{
    public Profundo(string nome) : base(nome)
    { }
    public override void Manifestar()
    {
        Console.WriteLine(Nome + " apareceu das profundezas.");
    }
}

public class MiGo : EntidadeCosmica
{
    public MiGo(string nome) : base(nome)
    { }
    public override void Manifestar()
    {
        base.Manifestar();
        Console.WriteLine(Nome + " realizou uma manifestação estranha.");
    }
}

public class Pesquisador
{
    public string Nome { get; set; }

    private List<EntidadeCosmica> catalogo;

    public Pesquisador(string nome)
    {
        Nome = nome;
        catalogo = new List<EntidadeCosmica>();
    }
    public void Catalogar(EntidadeCosmica e)
    {
        catalogo.Add(e);
    }
    public void LerCatalogo()
    {
        Console.WriteLine("\nCatálogo de " + Nome + ":");
        foreach (EntidadeCosmica entidade in catalogo)
        {
            entidade.Manifestar();
        }
    }
}

public class Program
{
    public static void Main()
    {
        EntidadeCosmica entidade = new EntidadeCosmica("Cthulhu");
        Profundo profundo = new Profundo("Profundo");
        MiGo migo = new MiGo("Mi-Go");

        entidade.Origem = "Desconhecida";
        profundo.Origem = "Oceano";

        Pesquisador pesquisador = new Pesquisador("William");

        pesquisador.Catalogar(entidade);
        pesquisador.Catalogar(profundo);
        pesquisador.Catalogar(migo);

        pesquisador.LerCatalogo();
    }
}
