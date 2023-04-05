#include <iostream>
using namespace std;

//Restituisce il resto come un float
float calcolo_resto(float totale, float denaro_ricevuto){
	return denaro_ricevuto-totale;	//normale sottrazione tra il denaro che si riceve e il totale
}

int main() {		
	float totale=0, importo, somma_ricevuta,resto;
	
	int quantita;
	int prodotto_numero=1;	//il primo oggetto sarà l'oggetto numero, il secondo oggetto sarà l'oggetto 2 e così via
	
	string successivo="Si";		//Inizializziamo con Si così il ciclo DO-WHILE può partire con il primo oggetto
	
	do {
		cout<<"Inserisci importo del prodotto numero "<<prodotto_numero<<" : \n";
		cin>>importo;		//importo del singolo oggetto
		
		cout<<"Quantita' ? \n";
		cin>>quantita;		//quantità dell'oggetto
		
		totale+=importo*quantita;		//aggiunge al totale l'importo dell'oggetto nella sua quantità
		
		cout<<"Hai altri prodotti nel carello? \n";
		cin>>successivo;				//se scriviamo si ci chiederà di inserire un altro oggetto, altrimenti esce dal ciclo DO-WHILE
		
		prodotto_numero++;				//incrementa la numerazione dell'oggetto
		
		//Se la condizione del while risulta essere falsa, esegue il blocco del DO fino a quando la condizione sarà vera
	}while (successivo=="si" || successivo=="Si" || successivo=="SI" || successivo "sI"); //ci chiederà un nuovo oggetto fino a quanto scriveremo "si" scritto in vari modi
	
	cout<<"Totale da pagare: \n"<<totale<<endl;
	cout<<"Inserisci la somma ricevuta: \n";
	cin>>somma_ricevuta;
	
	//chiamiamo la funzione e mette il risultato dentro resto
	resto=calcolo_resto(totale, somma_ricevuta);
		
	cout<<"Resto da dare : \n"<<resto;		//stampa a video il resto appena calcolato
	
	
	return 0;
}			
						
	
