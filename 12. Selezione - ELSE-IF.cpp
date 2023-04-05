//LIBRERIE
#include <iostream>				//Gestisce stream Input e Output -> fa funzionare il COUT e CIN
#include <string>				//Permette di usare le STRINGHE

using namespace std;

int main(){
	
	cout<<"SE IL NUMERO INSERITO E' MAGGIORE O UGUALE DI 100 INCREMENTO DI 10, "<<endl;
	cout<<"ALTRIMENTI SE E' MINORE O UGUALE DI 50 DECREMENTO DI 10, "<<endl;
	cout<<"ALTRIMENTI NON ACCADE NULLA"<<endl;
	
	
	int numero;
	cout<<"Inserisci un numero"<<endl;
	cin>>numero;
	
	
	if(numero>=100){			// se è maggiore o uguale di 10 esegue IL BLOCCO 1, altrimenti esegue il BLOCCO 2
		numero=numero+10;		//BLOCCO 1
	}
	
	
	else if(numero<=50){		//BLOCCO 2.
		numero=numero-10;
	}
	
	//Se le due condizioni non sono vere, il valore non viene toccato
	
	cout<<"Il numero ottenuto e' : "<<numero;		//Stampa a video il risultato finale
	
	return 0;
		
		
}




