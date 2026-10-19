class Instrumentista
  attr_reader :nome, :instrumento

  def initialize(nome, instrumento)
    @nome = nome
    @instrumento = instrumento
  end

  def interpretar(peca)
    raise NotImplementedError, "A classe filha deve implementar interpretar"
  end
end

class Solista < Instrumentista
  def interpretar(peca)
    puts "#{nome} toca #{peca} no instrumento #{instrumento}, conduzindo a melodia principal."
  end
end

class Acompanhador < Instrumentista
  def interpretar(peca)
    puts "#{nome} toca #{peca} no instrumento #{instrumento}, acompanhando o ritmo do solista."
  end
end

class Regente
  def initialize(nome)
    @nome = nome
    @orquestra = []
  end

  def convocar(instrumentista)
    @orquestra << instrumentista
  end

  def reger(peca)
    puts "#{@nome} está regendo a peça #{peca}."
    @orquestra.each do |instrumentista|
      instrumentista.interpretar(peca)
    end
  end

  def escalacao
    @orquestra.map do |instrumentista|
      "#{instrumentista.class} - #{instrumentista.nome}"
    end
  end
end

solista = Solista.new("Kaori", "Violino")
acompanhador = Acompanhador.new("Takeshi", "Piano")
regente = Regente.new("Maestro Kenji")

regente.convocar(solista)
regente.convocar(acompanhador)
regente.reger("Concerto de Primavera")

regente.escalacao.each do |texto|
  puts texto
end

instrumentista = Instrumentista.new("Alex", "Flauta")
