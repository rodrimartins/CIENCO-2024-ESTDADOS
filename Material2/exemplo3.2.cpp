#include <iostream>
using namespace std;

void troca(int & px, int & py)
{
	int temp;
	temp = px;
	px = py;
	py = temp;
}


int main()
{
    setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	cout << "Entre com o n�mero 1: ";
	cin >> n1;
	cout << "Entre com o n�mero 2: ";
	cin >> n2;
	cout << "Voc� entrou com " << n1 << " e " << n2 << endl;
	// Troca a com b -- passa argumentos por referencia
	troca(n1, n2);
	cout << "Trocados, eles s�o " << n1 << " e " << n2 << endl;
}



