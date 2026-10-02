#include <iostream>
#include <string>
using namespace std;

class Banda {
public:
    string nome;
    int integrantes;
    float potenciaSom;
    int energia;

    void duelar(Banda &rival) {
        cout << nome << " esta duelando contra " << rival.nome << endl;
        rival.energia = rival.energia - potenciaSom;
    }
};

int main() {

    Banda banda1;
    Banda banda2;
    banda1.nome = "Rock";
    banda1.integrantes = 4;
    banda1.potenciaSom = 20;
    banda1.energia = 100;
    banda2.nome = "Metal";
    banda2.integrantes = 5;
    banda2.potenciaSom = 30;
    banda2.energia = 100;
    banda1.duelar(banda2);

    cout << endl;
    cout << "Banda: " << banda1.nome << endl;
    cout << "Integrantes: " << banda1.integrantes << endl;
    cout << "Potencia: " << banda1.potenciaSom << endl;
    cout << "Energia: " << banda1.energia << endl;

    cout << endl;
    cout << "Banda: " << banda2.nome << endl;
    cout << "Integrantes: " << banda2.integrantes << endl;
    cout << "Potencia: " << banda2.potenciaSom << endl;
    cout << "Energia: " << banda2.energia << endl;

    return 0;
}
