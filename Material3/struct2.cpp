#include <iostream>

using namespace std;

struct Pessoa
{
    string nome;
	int idade;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
	Pessoa p;

	cout << "Qual seu nome? ";
	getline(cin, p.nome); //Lê uma linha inteira de caracteres de um fluxo de entrada
	//cin >> p.nome;

	cout << "Quantos anos voce tem? ";
	cin >> p.idade;

    cout << "Nome: " << p.nome << endl;
    cout << "Idade: " << p.idade << " anos" << endl;
	return 0;
}


