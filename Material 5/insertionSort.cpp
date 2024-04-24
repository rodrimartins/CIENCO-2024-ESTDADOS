#include <iostream>

using namespace std;

void imprimeVetor(int x[])
{

	for (int i = 0; i <= 4; i++)
	{
		cout << "Numero: " << x[i] << endl;
	}
}

void insertionSort(int vetor[])
{

	int j = 0, eleito = 0;

	//ordenando de forma crescente
	//la�o com a quantidade de elementos do vetor - 1
	for (int i = 1; i <= 4; i++)
	{
		eleito = vetor[i];
		j = i - 1;
		//la�o que percorre os elementos a esquerda do numero eleito
		//ou at� encontrar a posi��o para recoloca��o do n�mero eleito
		//respeitando a ordena��o procurada
		while (j >= 0 && vetor[j] > eleito)
		{
			vetor[j + 1] = vetor[j];
			j--;
		}
		vetor[j + 1] = eleito;
	}
}
int main()
{
	int vetor[5];

	//carregando os n�meros no vetor
	for (int i = 0; i <= 4; i++)
	{
		cout << "Digite o numero" << endl;
		cin >> vetor[i];
	}

	imprimeVetor(vetor);
	insertionSort(vetor);
	cout << endl;
	imprimeVetor(vetor);
	return 0;
}


