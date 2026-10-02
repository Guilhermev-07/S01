#include <iostream>
#include <string>
using namespace std;

class Hobbit {
public:
    string nome;

    virtual void fazerAtividade() {
        cout << "O hobbit " << nome
             << " esta aproveitando um dia tranquilo na Comarca."
             << endl;
    }
};

class Jardineiro : public Hobbit {
public:

    void fazerAtividade() {
        cout << "O jardineiro " << nome
             << " esta cuidando das flores e plantas ao redor das tocas!"
             << endl;
    }
};

class Cozinheiro : public Hobbit {
public:

    void fazerAtividade() {
        cout << "O cozinheiro " << nome
             << " esta preparando o segundo cafe da manha para os convidados!"
             << endl;
    }
};

class Fazendeiro : public Hobbit {
public:

    void fazerAtividade() {
        cout << "O fazendeiro " << nome
             << " esta colhendo vegetais e hortalicas em suas terras!"
             << endl;
    }
};

int main() {

    Jardineiro jardineiro;
    Cozinheiro cozinheiro;
    Fazendeiro fazendeiro;

    jardineiro.nome = "Sam";
    cozinheiro.nome = "Bilbo";
    fazendeiro.nome = "Frodo";

    Hobbit* hobbits[3];

    hobbits[0] = &jardineiro;
    hobbits[1] = &cozinheiro;
    hobbits[2] = &fazendeiro;

    for (int i = 0; i < 3; i++) {
        hobbits[i]->fazerAtividade();
    }

    return 0;
}
