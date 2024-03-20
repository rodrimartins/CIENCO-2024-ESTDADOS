#include <iostream>
using namespace std;

int main() {

    setlocale(LC_ALL, "Portuguese");
    const int tamanhoArray = 5;
    int array[tamanhoArray];

    // Preenchendo o array com valores fornecidos pelo usu�rio
    cout << "Digite " << tamanhoArray << " valores inteiros para o array:" << endl;
    for (int i = 0; i < tamanhoArray; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> *(array + i);
    }

    // Calculando a m�dia dos valores do array usando ponteiros
    int soma = 0;
    for (int i = 0; i < tamanhoArray; i++) {
        soma += *(array + i);
    }

    // o operador static_cast, converte a vari�vel soma em um valor do tipo float.
    // Dessa forma, o resultado da divis�o tamb�m ser� do tipo float.
    float media = static_cast<float>(soma) / tamanhoArray;

    // Imprimindo a m�dia dos valores do array
    cout << "A m�dia dos valores do array � " << media << endl;

    return 0;
}


