#include <iostream>

using namespace std;
int main() {
	cout<<"Il programma conta da 0 ad un valore definito dall'utente usando WHILE \n";
	
	int contatore=0;
	int valoreMassimo;
	cout<<"Fino a dove vuoi contare? \n";
	cin>>valoreMassimo;
	cout<<"Incominciamo a contare \n";
	cout<<endl<<endl;		//aggiungo due righe vuote
	
	
	//Grazie a while, eseguo tutto il blocco fino a quando la condizione tra parentesi è vera
	while(contatore<=valoreMassimo){		//ovvero fino a quando contatore rimane minore-uguale al valoreMassimo
		cout<<contatore<<endl;				//Stampo l'attuale valore del contatore, parte da 0 fino al massimo che abbiamo definito
		contatore++;						//Incremento di 1 il contatore, alla ripetizione successiva vedrò il numero successivo
	}
	cout<<"Ho contato fino a : "<<valoreMassimo<<endl;
	cout<<"E' stata una faticaccia \n";

	
	
	return 0;				
						

}
