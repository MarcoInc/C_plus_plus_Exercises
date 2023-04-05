#include <iostream>
using namespace std;


int addizione(int a, int b){	//La funzione 'addizione' restituisce un int e prende gli int a e b come input
	int somma=a+b;	
	return somma;			//Restituisce il valore somma, ovvero un intero 
}

int sottrazione(int a, int b){	//esegui la sottrazione tra a e b
	int differenza=a-b;
	return differenza;			//il tipo di ritorno è sempre un intero, come specificato nella dichiarazione della funzione
}

int moltiplicazione(int a, int b){	//eseguo il prodotto tra a e b
	int prodotto=a*b;
	return prodotto;
}

int divisione(int a, int b){ //esegui una divisione intera->senza virgola, tra a e b
	return a/b;				//posso restituire direttamente il valore, purchè sia dello stesso tipo del tipo di ritorno
}

int resto(int a, int b){		//restituisco il resto della divisione tra a e b
	return a%b;

}

int main() {		
	cout<<"Questa e' una calcolatrice. Dopo avermi dato due numeri, eseguirò una somma, sottrazione, moltiplicazione e divisione con il resto \n";
	int primoNumero, secondoNumero;		
	cout<<"Inserisci il primo numero : \n";
	cin>>primoNumero;
	
	cout<<"Inserisci il secondo numero : \n";
	cin>>secondoNumero;
	
	int risultatoAddizione=addizione(primoNumero, secondoNumero);	 	//addizione è il nome della funzione e primoNumero e secondoNumero sono i parametri che passo alla funzione
	int risultatoSottrazione=sottrazione(primoNumero, secondoNumero);		//sottrazione è il nome della funzione tra a e b
	int risultatoMoltiplicazione=moltiplicazione(primoNumero, secondoNumero);	//moltiplicazione è il nome della funzione tra a e b
	int risultatoDivisione=divisione(primoNumero, secondoNumero);		//divisione è il nome della funzione tra a e b
	int risultatoResto=resto(primoNumero, secondoNumero);			//resto è il nome della funzione tra a e b
		
	
	//stampo a video i risultati usando le variabili che conservano i risultati di tutte le funzioni
	cout<<"La somma tra "<<primoNumero<< " e "<<secondoNumero<<" e' : "<<risultatoAddizione<<endl;
	cout<<"La differenza tra "<<primoNumero<< " e "<<secondoNumero<<" e' : "<<risultatoSottrazione<<endl;
	cout<<"Il prodotto tra "<<primoNumero<< " e "<<secondoNumero<<" e' : "<<risultatoMoltiplicazione<<endl;
	cout<<"Il rapporto tra "<<primoNumero<< " e "<<secondoNumero<<" e' : "<<risultatoDivisione<<" con il resto di "<<risultatoResto<<endl;
	
	return 0;
}			
						

