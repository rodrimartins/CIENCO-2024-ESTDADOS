#include <iostream>

using namespace std;

struct TemperaturaDia {
    int dia;
    float temperatura;
};

int main() {

    setlocale(LC_ALL, "Portuguese");
    TemperaturaDia tempDia;
    int contador = 0;

    cout << "Registro de Temperaturas Diárias. Digite -999 para encerrar." << endl;

    do {
        contador++;
        cout << "Dia " << contador << " - Digite a temperatura: ";
        cin >> tempDia.temperatura;

        if (tempDia.temperatura != -999) {
            tempDia.dia = contador;
            cout << "Dia: " << tempDia.dia << " - Temperatura: " << tempDia.temperatura << "°C" << endl;
        }

    } while (tempDia.temperatura != -999);

    cout << "Registro de temperaturas encerrado." << endl;

    return 0;
}


