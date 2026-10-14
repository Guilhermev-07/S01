class Persona:
    def __init__(self, nome, arcano):
        self.nome = nome
        self.arcano = arcano

    def invocar(self):
        print("Persona:", self.nome)
        print("Arcano:", self.arcano)

class Aliado:
    def __init__(self, nome, codinome):
        self.nome = nome
        self.codinome = codinome

class Lider:
    def __init__(self, codinome):
        self.codinome = codinome
        self.persona = Persona("Arsène", "Louco")
        self._equipe = []

    def recrutar(self, aliado: Aliado):
        self._equipe.append(aliado)

    def infiltrar(self, palacio):
        if palacio == "":
            print("Palácio invadido!")
        else:
            print("Palácio de", palacio, "invadido!")

        self.persona.invocar()
        print("Equipe:")

        for aliado in self._equipe:
            print(aliado.nome, "-", aliado.codinome)

if __name__ == "__main__":
    aliado1 = Aliado("Ryuji Sakamoto", "Skull")
    aliado2 = Aliado("Ann Takamaki", "Panther")
    joker = Lider("Joker")
    joker.recrutar(aliado1)
    joker.recrutar(aliado2)
    joker.infiltrar("")
