#include <iostream>
#include <cstdlib>

using namespace std;
 
//Ponteiro de Struct

typedef struct data {
	short dia;
	short mes;
	int ano;
} Data;

int main (void){
	Data data; //vari�vel data do tipo struct data
	Data *hoje; //ponteiro hoje para um tipo struct data
	hoje = &data; //hoje aponta para o endere�o de data

	//dados sendo inseridos na vari�vel data
	(*hoje).dia = 20;
	(*hoje).mes = 1;
	(*hoje).ano = 2009;
	
	//hoje->dia = 20;
	//hoje->mes = 1;
	//hoje->ano = 2009;

	//mostrando o que est� gravado no endere�o contido em hoje
	cout << "Data registrada:" << endl;
	cout << hoje->dia <<"/"<< hoje->mes <<"/"<< hoje->ano << endl;
	system ("pause");
}


