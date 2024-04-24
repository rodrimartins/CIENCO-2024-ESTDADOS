#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int g[13];
    int numeroApostador, acertos;
    int r[13];
    int cont=0;

    for (int i = 0; i < 13; i++) {
        cout << "Loteria Esportiva " << endl ;
        cout << "1 - Vitória do time Mandante" << endl;
        cout << "2 - Empate" << endl;
        cout << "3 - Vitória do time Visitante" << endl << endl;
        cout << "Digite o gabarito do seu jogo " << ++cont << endl;
        cin >> g[i];
    }

    while (true) {
        cout << "Digite o número do cartão do apostador (ou Digite 0 para encerrar): ";
        cin >> numeroApostador;

        if (numeroApostador == 0) {
            break;
        }

        cont = 0;
        for (int i = 0; i < 13; i++) {
            cout << "Digite as respostas do apostador, jogo "  << ++cont << endl;
            cin >> r[i];
        }

        acertos = 0;

        for (int i = 0; i < 13; i++) {
            if (r[i] == g[i]) {
                acertos++;
            }
        }

        cout << "Apostador número: " << numeroApostador << endl;
        cout << "Quantidade de acertos: " << acertos << endl;

        if (acertos == 13) {
            cout << "GANHADOR, PARABENS" << endl;
        }
    }

    return 0;
}
