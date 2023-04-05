//LIBRERIE
#include <iostream>				//Gestisce stream Input e Output -> fa funzionare il COUT e CIN
#include <string>				//Permette di usare le STRINGHE

using namespace std;

int main(){
	cout<<"IL PROGRAMMA INCREMENTA DI 10 IL NUMERO INSERITO SE QUESTO E' MINORE DI 100, ALTRIMENTI RIMANE INVARIATO"<<endl;

	int numero;
	cout<<"Inserisci un numero "<<endl;
	cin>>numero;
	if(numero<100){			// Se è minore di 10 esegue il BLOCCO 1
		numero=numero+10;	// BLOCCO 1 -> incremento di 10
	}
	cout<<"NUMERO FINALE : "<<numero<<endl;
	
	return 0;		
		
}




