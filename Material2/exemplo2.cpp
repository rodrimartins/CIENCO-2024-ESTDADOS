#include <iostream>
#include <locale.h>

using namespace std;

//prot�tipo da fun��o
bool par(int num);
void mensagem();

int main()
{
	/*
	 comando de regionaliza��o do C++ para que n�o somente acentue as palavras
	 corretamente, mas que mostre datas e horas em portugu�s.*/
	setlocale(LC_ALL, "Portuguese");
	int n = 0;

	mensagem();

	cout << "Digite um n�mero: ";
	cin >> n;

	if (par(n))
	{
		cout << "O n�mero " << n << " � par" << endl;
	}
	else
	{
		cout << "O numero " << n << " eh impar" << endl;
	}
	return 0;
}
bool par(int num)
{
	if (num % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void mensagem()
{
	cout << "Aula do Material 2" << endl;
	cout << endl;
}








