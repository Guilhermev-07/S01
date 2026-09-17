#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float capacidadeMaxima;
    float cargaAtual = 0.0;
    int opcao;

    cout << "Informe a capacidade maxima de carga do drone (kg): " << endl;
    cin >> capacidadeMaxima;

    do {
        cout << endl << "=== SISTEMA DE CARGA DO DRONE ===" << endl;
        cout << "1. Verificar Carga" << endl;
        cout << "2. Carregar Pacote" << endl;
        cout << "3. Descarregar Pacote" << endl;
        cout << "4. Encerrar Operacao" << endl;
        cout << "Escolha uma opcao: " << endl;
        cin >> opcao;

        if (opcao == 1) {
            cout << fixed << setprecision(2);

            cout << "Carga Atual: " << cargaAtual << " kg / " << capacidadeMaxima << " kg" << endl;

            cout << "Espaco Disponivel: " << capacidadeMaxima - cargaAtual << " kg" << endl;
        }

        else if (opcao == 2) {
            float pesoPacote;

            cout << "Digite o peso do pacote a ser carregado (kg): " << endl;
            cin >> pesoPacote;

            if (cargaAtual + pesoPacote > capacidadeMaxima) {
                cout << "Alerta: Peso maximo de decolagem excedido! Operacao cancelada." << endl;
            }
            else {
                cargaAtual = cargaAtual + pesoPacote;
                cout << "Pacote adicionado com sucesso!" << endl;
            }
        }

        else if (opcao == 3) {
            float pesoRemover;

            cout << "Digite o peso a ser descarregado (kg): " << endl;
            cin >> pesoRemover;

            if (pesoRemover > cargaAtual) {
                cout << "Erro: Nao e possivel remover mais peso do que esta carregado." << endl;
            }
            else {
                cargaAtual = cargaAtual - pesoRemover;
                cout << "Pacote descarregado com sucesso!" << endl;
            }
        }

        else if (opcao == 4) {
            cout << "Encerrando sistema de telemetria..." << endl;
        }

        else {
            cout << "Opcao invalida!" << endl;
        }

    } while (opcao != 4);

    return 0;
}
