#include <iostream>
#include <queue>

using namespace std;

int main() {

    setlocale(LC_ALL, "portuguese");
    queue<string> filaAtendimento;
    int opcao;
    string nomeCliente;

    cout << "Bem-vindo ao sistema de atendimento da loja!\n";

    do {
        cout << "\nOp��es dispon�veis:\n";
        cout << "1. Inserir cliente na fila\n";
        cout << "2. Atender pr�ximo cliente\n";
        cout << "3. Exibir fila de espera\n";
        cout << "4. Encerrar o programa\n";
        cout << "\nDigite a op��o desejada: ";
        cin >> opcao;

        cin.ignore();

        switch (opcao) {
            case 1:
                cout << "Digite o nome do cliente: ";
                getline(cin, nomeCliente);
                filaAtendimento.push(nomeCliente);
                cout << "Cliente " << nomeCliente << " foi adicionado � fila de espera\n";
                break;
            case 2:
                if (!filaAtendimento.empty()) {
                    cout << "Atendendo o cliente: " << filaAtendimento.front() << endl;
                    filaAtendimento.pop();
                } else {
                    cout << "N�o h� clientes na fila de espera\n";
                }
                break;
            case 3:
                if (!filaAtendimento.empty()) {
                    cout << "Fila de espera: ";
                    queue<string> filaAuxiliar = filaAtendimento;
                    while (!filaAuxiliar.empty()) {
                        cout << filaAuxiliar.front() << " ";
                        filaAuxiliar.pop();
                    }
                    cout << endl;
                } else {
                    cout << "A fila de espera est� vazia\n";
                }
                break;
            case 4:
                cout << "Encerrando o programa...\n";
                break;
            default:
                cout << "Op��o inv�lida. Digite novamente\n";
                break;
        }
    } while (opcao != 4);

    return 0;
}
