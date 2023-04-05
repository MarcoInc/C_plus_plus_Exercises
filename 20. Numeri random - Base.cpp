#include <iostream>
#include <stdlib.h>			//Permette di usare SRAND e RAND
#include <time.h>			//Permette l'uso di TIME per generare numeri via via sempre diversi

using namespace std;
int main() {
	
	srand(time(0));		//CREO UN GENERATORE DI NUMERI CASUALI
	
	int casuale=rand();		//assegno un numero casuale da 0 a un MASSIMO MOLTO GRANDE;
	cout<<"Il numero random assegnato e' :"<<casuale<<endl;
	
	return 0;
}			
						

