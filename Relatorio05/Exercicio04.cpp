#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int matriz_solar[5][5] = {0};

    int opcao = 0;

    while (opcao != 3) {
        cout << endl << "=== TELEMETRIA DO PAINEL SOLAR ===" << endl;
        cout << "1. Ativar Celula" << endl;
        cout << "2. Ver Mapa da Matriz" << endl;
        cout << "3. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        if (opcao == 1) {
            int fileira, coluna;

            cout << "Digite a fileira (0-4): " << endl;
            cin >> fileira;

            cout << "Digite a coluna (0-4): " << endl;
            cin >> coluna;

            if (fileira >= 0 && fileira <= 4 &&
                coluna >= 0 && coluna <= 4) {

                if (matriz_solar[fileira][coluna] == 0) {
                    matriz_solar[fileira][coluna] = 1;

                    cout << "Sucesso: Celula solar ativada!" << endl;
                }
                else {
                    cout << "Erro: Celula solar ja esta em operacao!" << endl;
                }
            }
            else {
                cout << "Erro: Posicao invalida!" << endl;
            }
        }

        else if (opcao == 2) {
            cout << endl << "--- Mapa da Matriz Solar ---" << endl;

            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    cout << "[" << matriz_solar[i][j] << "] ";
                }

                cout << endl;
            }
        }

        else if (opcao == 3) {
            cout << endl << "Encerrando sistema..." << endl;
        }

        else {
            cout << "Opcao invalida!" << endl;
        }
    }

    int ativas = 0;
    int inativas = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {

            if (matriz_solar[i][j] == 1) {
                ativas++;
            }
            else {
                inativas++;
            }
        }
    }

    float percentual = (ativas / 25.0) * 100;

    cout << endl << "=== RELATORIO FINAL DE OPERACAO ===" << endl;

    cout << "Total de celulas ATIVAS: "
         << ativas << endl;

    cout << "Total de celulas INATIVAS: "
         << inativas << endl;

    cout << fixed << setprecision(2);

    cout << "Capacidade Operacional: "
         << percentual << "%" << endl;

    return 0;
}
