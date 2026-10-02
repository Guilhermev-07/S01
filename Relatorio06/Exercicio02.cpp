#include <iostream>
#include <string>
using namespace std;

class LinkSocial {
private:
    string nome;
    string arcana;
    int rank;

public:
    void setNome(string n) {
        nome = n;
    }
    string getNome() {
        return nome;
    }
    void setArcana(string a) {
        arcana = a;
    }
    string getArcana() {
        return arcana;
    }
    void setRank(int r) {
        rank = r;
    }
    int getRank() {
        return rank;
    }
    void subirRank() {
        rank = rank + 1;
    }
};

int main() {
    LinkSocial personagem;
    personagem.setNome("Yukari");
    personagem.setArcana("Lovers");
    personagem.setRank(1);
    personagem.subirRank();

    cout << "Nome: " << personagem.getNome() << endl;
    cout << "Arcana: " << personagem.getArcana() << endl;
    cout << "Rank: " << personagem.getRank() << endl;

    return 0;
}
