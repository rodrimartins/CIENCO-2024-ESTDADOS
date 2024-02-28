#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int intervalo = 1;
	while (intervalo < 21) {
		cout << " QUADRADO DE " << intervalo << " = " << intervalo * intervalo << endl;
		intervalo = intervalo + 1;
	}
	return 0;
}