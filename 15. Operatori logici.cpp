#include <iostream>

using namespace std;
int main() {
	cout<<"Il programma fa tre test \n";
	cout<<"1. verifica se il primo numero e' compreso tra 0 e 10 con l'operatore AND \n";
	cout<<"2. Se almeno uno dei due numeri e' pari con l'operatore OR \n";
	cout<<"3. Se il secondo numero e' pari con l'operatore NOT \n";
	 
	int numero1, numero2;			//Dichiaro due variabili int in un solo rigo. Non sono inzizializzate
	cout<<"Inserisci il primo numero "<<endl;
	cin>>numero1;
	cout<<"Inserisci il secondo numero "<<endl;
	cin>>numero2;
	
	cout<<"Hai inserito "<<numero1<<" e "<<numero2<<endl;

	//OPERATORE AND, equivale ad 'e'. Per essere tutta vera, tutte le condizioni devono essere vere
	if(numero1>=0 && numero1<=10)						//Il primo numero è maggiore-uguale di 0 E minore-uguale di 10?
		cout<<"Il primo numero e' compreso tra 0 e 10 \n";			//se dopo l'if c'è solo un rigo, omettiamo le parentesi graffe
	
	
	//OPERATORE OR, equivale ad 'o'. Per essere tutta vera, almeno una codizione deve essere vera
	if(numero1%2==0 || numero2%2==0)				//Il primo O il secondo numero sono pari?
		cout<<"Almeno uno tra i due numeri e' pari \n";
	
	
	//OPERATORE NOT, equivale a 'NON'. Nega quel che c'è dopo.
	if( !(numero2%2==0) )				//è il secondo numero un numero non pari?					
		cout<<"Il secondo numero non e' pari \n";
	
	
	return 0;				
						

}
