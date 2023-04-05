#include <iostream>
using namespace std;

//Una funzione permette di risparmiare righe di codice, definendone una che verrà usata in qualunque parte del codice
//Le seguenti funzioni verranno eseguite una volta richimate da altre parti


//DICHIARAZIONE FUNZIONE
//TIPO_DI_RITORNO  NOME_FUNZIONE(PARAMETRI_INPUT_FUNZIONE)
int addizione(int a, int b, int c){		//La funzione 'addizione' restituisce un int e prende in input PARAMETRI FORMALI a , b e c
										//a , b e c costituiscono l'input della funzione passato nella chiamata della funzione
	int somma=a+b+c;		//somma è una VARIABILE LOCALE alla funzione
	return somma;				//restituisco la variabile somma di tipo int come specificato nella dichiarazione
}

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

						

