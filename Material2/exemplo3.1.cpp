#include <iostream>
using namespace std;

void troca(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
	int a, b;
	cout << "Entre com dois n�meros: ";
	cin >> a >> b;
	cout << "Voc� entrou com " << a << " e " << b << endl;

// Troca a com b
	troca(a, b);
	cout << "Trocados, eles s�o " << a << " e " << b << endl;
}
