#include <iostream>

using namespace std;
int main() {
	cout<<"Il programma continuerà a sommare i valori inseriti fino a quando non inseriamo uno 0 \n";
	
	int numero, somma=0;
		//Prima del while, viene eseguito tutto il blocco DO almeno una volta volta
	do {
		cout<<"Inserisci un numero \n";
		cin>>numero;
		somma+=numero;
	}while (numero!=0);		//Se la condizione del while risulta essere falsa, esegue il blocco del DO fino a quando la condizione sarà vera
			
	cout<<somma<<endl;

	
	return 0;
}			
						

