//DIRETTIVE -> tutto cio' che sta all'inzio del codice preceduto da # HASHTAG

//LIBRERIE 
#include <iostream>				//Gestisce stream Input e Output -> fa funzionare il COUT e CIN
#include <string>				//Permette di usare le STRINGHE

#define PIGRECO	3.14159			//ASSOCIO al SIMBOLO PIGRECO il valore 3.14159. Posso usare PIGRECO in tutto questo codice->MASSIMA VISIBILITA'

using namespace std;		//definisco il NAMESPACE

int main(){					//definisco la funzione MAIN che viene eseguita per prima

	int numero;				//DICHIARO una variabile di tipo INT
	numero=3;				//INIZIALIZZO una variabile	con un numero INTERO
	
	cout<<numero<<endl;		//STAMPO A VIDEO la variabile. endl->A CAPO
	
	int numero2=3;			//DICHIARO una variabile di tipo INT e la INIZIALIZZO con un INTERO nello stesso rigo
	numero2=4;				//MODIFICO il valore di una variabile gia' inizializzata
	
	const float accelerazioneGravitazionale=9.8; //DICHIARO e INIZIALIZZO un tipo FLOAT COSTANTE. Non e' possibile scrivere ulteriormente in una costante, e' di SOLA LETTURA
	//accelerazioneGravitazionale=8.9;			//Avremo errore. Stiamo accedendo ad una costante
	
	cout<<PIGRECO<<endl;				//STAMPO A VIDEO il simbolo PIGRECO definito all'inzio
		

	return 0;				//la funzione MAIN termina sempre con un return seguito da un numero
}
