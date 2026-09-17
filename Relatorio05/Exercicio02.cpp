#include <iostream>
using namespace std;

float calcular_confiabilidade_sistema(float probabilidades[], int tamanho) {
    float confiabilidade = 1.0;

    for (int i = 0; i < tamanho; i++) {
        confiabilidade = confiabilidade * probabilidades[i];
    }

    return confiabilidade;
}

int main() {
    int tamanho;

    cout << "Digite a quantidade de componentes do sistema: " << endl;
    cin >> tamanho;

    float probabilidades[tamanho];

    for (int i = 0; i < tamanho; i++) {
        cout << "Digite a probabilidade do componente " << i + 1 << ": " << endl;
        cin >> probabilidades[i];
    }

    float resultado = calcular_confiabilidade_sistema(probabilidades, tamanho);

    cout << "Confiabilidade total do sistema: " << resultado << endl;

    return 0;
}
