#include <iostream>

using namespace std;

struct Livro {
    string titulo;
    string autor;
    int anoPublicacao;
    string disponivel;
};

int main() {
    setlocale(LC_ALL, "Portuguese");
    Livro livro;
    cout << "Digite o t�tulo do livro: ";
    getline(cin, livro.titulo);
    cout << "Digite o autor do livro: ";
    getline(cin, livro.autor);
    cout << "Digite o ano de publica��o: ";
    cin >> livro.anoPublicacao;

    char resposta;
    cout << "O livro est� dispon�vel? (s/n): ";
    cin >> resposta;
    if (resposta == 's' || resposta == 'S'){
       livro.disponivel = "Sim";
    }
    else{
        livro.disponivel = "N�o";
    }

    cout << "Livro: " << livro.titulo << "\nAutor: " << livro.autor <<
     "\nAno de Publica��o: " << livro.anoPublicacao;
    cout << "\nDisponibilidade: " << livro.disponivel << endl;
    return 0;
}

