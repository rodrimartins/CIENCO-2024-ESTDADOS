#include <iostream>

using namespace std;

void altera(int & n1, int & n2)
{
	n1 = 100;
	n2 = 200;

}

int main()
{
    setlocale(LC_ALL, "Portuguese");
	int n1 = 0, n2 = 0;

	cout << "Digite um n�mero: " << endl;
	cin >> n1;
	cout << "Digite outro n�mero: " << endl;
	cin >> n2;

	cout << "Primeiro n�mero: " << n1 << endl;
	cout << "Segundo n�mero: " << n2 << endl;

	altera(n1, n2);
	cout << "-----------------------------------------------------" << endl;
	cout << "Primeiro n�mero alterado: " << n1 << endl;
	cout << "Segundo n�mero alterado: " << n2 << endl;

	return 0;

}










