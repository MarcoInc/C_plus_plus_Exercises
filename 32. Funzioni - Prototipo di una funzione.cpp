#include <iostream>
using namespace std;

//PROTOTIPO DI UNA FUNZIONE si usa se definiamo una funzione dopo il main o altrove
//Se manca il PROTOTIPO DELLA FUNZIONE, la funzione non può essere usata, non verrà vista dal main;
int addizione(int a, int b, int c);		//SI DEFINICE esattamente come la DEFINIZIONE DELLA FUNZIONE seguito dal ; e senza il corpo della funzione
//int addizione(int, int, int);			//UGUALE a quello di sopra
									//è possibile omettere il nome del parametro formale




int main() {		//IL PROGRAMMA PARTE SEMPRE DAL MAIN
	cout<<"Somma tra tre numeri \n";
	int primoNumero, secondoNumero, terzoNumero;	//dentro il main, le variabili vengono chiamate VARIABILI GLOBALI-> durano per tutta la durata dell'esecuzione del programma
	cout<<"Inserisci il primo numero : \n";
	cin>>primoNumero;
	cout<<"Inserisci il secondo numero : \n";
	cin>>secondoNumero;	
	cout<<"Inserisci il terzo numero : \n";
	cin>>terzoNumero;
	
	//Metto il risultato in un'altra variabile che conserverà il risultato della funzione
	int sommaABC=addizione(primoNumero,secondoNumero,terzoNumero);		//Richiamo la funzione specificandone il NOME e mettendo tra parentesi i parametri che prevede la funzione come parametri formali
	
	//stampo a video i risultati usando le variabili che conservano i risultati di tutte le funzioni
	cout<<"La somma tra i tre numeri e' : "<<sommaABC;
									

	return 0;	

}


//La funzione è stata scritta sotto, e per essere usata useremo il suo PROTOTIPO
int addizione(int a, int b, int c){			//DEFINIZIONE DELLA FUNZIONE
	int somma=a+b+c;		
	return somma;			
}			

