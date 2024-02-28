#include <iostream>

using namespace std;

int main()
{
	double numeroHt, valorSalMin, valorHt;
	double salBruto, imp, salLiq;

	cout << "Digite o numero das Horas Trabalhadas: ";
	cin >> numeroHt;
	cout << "Digite o valor do Salario Minimo: ";
	cin >> valorSalMin;

	valorHt = valorSalMin / 2;
	salBruto = numeroHt * valorHt;
	imp = salBruto * 0.03;
	salLiq = salBruto - imp;

	cout << "Valor da Hora Trabalhada: " << valorHt << endl;
	cout << "Salario Bruto: " << salBruto << endl;
	cout << "Imposto: " << imp << endl;
	cout << "Salario Liquido:  " << salLiq << endl;

	return 0;
}
