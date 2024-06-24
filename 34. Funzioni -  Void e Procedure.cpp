#include <iostream>
using namespace std;

//PROCEDURA -> funzione che non restituisce nessun valore ma fa qualcosa
void stampa(string a){				//void indica un tipo 'VUOTO'
	cout<<a<<endl;;					//stampo la stringa a seguita da un A CAPO
}

int main() {		//IL PROGRAMMA PARTE SEMPRE DAL MAIN

	string stringa="CIAO MONDO";
	
	//eseguo 3 volte la stessa funzione passando la stessa stringa
	stampa(stringa);
	stampa(stringa);
	stampa(stringa);

	return 0;	

}

						

