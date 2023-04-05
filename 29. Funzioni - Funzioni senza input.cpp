#include <iostream>
#include <stdlib.h>			//Permette di usare SRAND e RAND
#include <time.h>
using namespace std;

//Una funzione permette di risparmiare righe di codice, definendone una che verr� usata in qualunque parte del codice
//Le seguenti funzioni verranno eseguite una volta richimate da altre parti


//Una funzione pu� anche non avere parametri in input ma far� qualcosa quando ver� richiamata
int random(){
		int casuale=rand()%(10);	//genera un numero tra 0 e 10
		return casuale;				//restituisce un int che � il numero appena generato
}

int main() {		//IL PROGRAMMA PARTE SEMPRE DAL MAIN

	srand(time(0));		//CREO GENERATORE DI NUMERI CASUALI
	
	//Eseguo pi� volte la funzione per vedere cosa accade
	cout<<random()<<endl;		//STAMPO direttamente il valore restituito dalla funzione random() senza passare parametri
	cout<<random()<<endl;
	cout<<random()<<endl;					

	return 0;	

}

						

