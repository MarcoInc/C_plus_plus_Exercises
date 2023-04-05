#include <iostream>
#include <stdlib.h>			//Permette di usare SRAND e RAND
#include <time.h>			//Permette l'uso di TIME per generare numeri via via sempre diversi

using namespace std;
int main() {
	cout<<"Questo programma lancia un dado di 6 facce tante volte quanto definito dall'utente e conta quante volte esce un numero pari o dispari \n";
	
	int lanci;
	cout<<"Quante volte vuoi lanciare il dado? \n";
	cin>>lanci;
	
	srand(time(0));		//CREO UN GENERATORE DI NUMERI CASUALI
	
	int numeroEstratto;
	int contatorePari=0;
	int contatoreDispari=0;
	
	cout<<endl<<"Sto lanciando \n"<<endl;
	
		//i parte da 0 e incrementa i fino a quanto arriva al numero di lanci
	for(int i=0 ; i<lanci ; i++){		//lancia il dado tot volte definito dall'utente
		numeroEstratto=rand()%(6)+1;			//estrare un numero a caso da 1 a 6		
		cout<<numeroEstratto<<endl;
		
		if(numeroEstratto%2==0){		//se è pari
			contatorePari++;			//incremento il contatore dei numeri pari
		}
		
		if(numeroEstratto%2!=0){		//se non è pari...NOT PARI
			contatoreDispari++;			//incremento il contatore dei numeri dispari
		}
	}
	
	cout<<endl<<"I numeri pari sono : "<<contatorePari<<endl;
	cout<<"I numeri dispari sono : "<<contatoreDispari<<endl;
	
	return 0;
}			
						

