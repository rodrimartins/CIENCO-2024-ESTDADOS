#include <iostream>

using namespace std;

typedef struct Professor {
    string nome;
    string telefone;
    string email;
} Professor;

int main() {
    setlocale(LC_ALL, "Portuguese");

    Professor prof;

    bool continua = true;
    char resposta;

    while (continua) {

        cout << "***************** Dados dos professores **************" << endl;

        cout << "Digite o nome: ";
        getline(cin, prof.nome);

        cout << "Digite o telefone: ";
        getline(cin, prof.telefone);

        cout << "Digite o e-mail: ";
        getline(cin, prof.email);

        cout << endl;

        cout << "**************** Dados do professor ******************" << endl;
        cout << "Nome: " << prof.nome << endl;
        cout << "Telefone: " << prof.telefone << endl;
        cout << "E-mail: " << prof.email << endl;

        cout << endl;
        cout << "Cadastrar outro professor? (S para SIM, N para NÃO): ";
        cin >> resposta;

        cout << endl;
        cin.ignore();

        if (resposta != 'S' && resposta != 's') {
            continua = false;
        }
    }
}
