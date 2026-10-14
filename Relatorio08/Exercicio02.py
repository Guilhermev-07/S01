class HeroiOverwatch:
    def __init__(self, codinome, funcao):
        self.codinome = codinome
        self.funcao = funcao

    def usar_suprema(self):
        print(self.codinome, "usou uma suprema!")

class HeroiTanque(HeroiOverwatch):
    def usar_suprema(self):
        print(self.codinome, "usou uma suprema de tanque!")

class HeroiSuporte(HeroiOverwatch):
    def usar_suprema(self):
        print(self.codinome, "usou uma suprema de suporte!")

    def curar_equipe(self):
        print(self.codinome, "está curando a equipe!")

if __name__ == "__main__":
    herois: list[HeroiOverwatch] = [
        HeroiOverwatch("Soldado", "Dano"),
        HeroiTanque("D.Va", "Tanque"),
        HeroiSuporte("Mercy", "Suporte")
    ]

    for heroi in herois:
        heroi.usar_suprema()
        if isinstance(heroi, HeroiSuporte):
            heroi.curar_equipe()
