//LIBRERIE 
#include <iostream>				//Gestisce stream Input e Output -> fa funzionare il COUT e CIN
#include <string>				//Permette di usare le STRINGHE

using namespace std;		

int main(){				

	int numero;						//DICHIARO una variabile
	
	cout<<"Inserisci un numero e premi invio"<<endl;		//Chiedo all'utente di inserire un valore. Con endl->A CAPO
	cin>>numero;											//Inizializzo la variabile con quello che scrivo da tastiera. Quando si e' deciso, si preme INVIO
	
	
	string parola;											//Inizializzo una stringa->piu' caratteri
	cout<<"Inserisci una parola e premi invio \n"<<endl;		//Chiedo all'utente di inserire una qualunque parola
															// \n->A CAPO, uguale a endl. Si mette tra " "
	cin>>parola;												//Inizializzo la stringa con quello che ho scritto e premo INVIO
		
		
	cout<<"Hai inserito il numero :"<<numero<<endl;				//tra le "  " inserisco un testo, poi segue numero. Poi vado A CAPO													
	cout<<"Hai scritto la seguente parola :"<<parola<<"\n";		//come sopra, seguito da parola. Poi vado A CAPO

	return 0;		
}
