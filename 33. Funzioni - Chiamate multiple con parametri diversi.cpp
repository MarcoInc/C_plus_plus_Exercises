#include <iostream>
using namespace std;

int sottrazione(int a, int b){	//Eseguo la differenza tra i due paramentri passati
	int differenza=a-b;			//faccio la differenza tra a e b 
	return differenza;			//restituisco un intero come specificato nel tipo di ritorno
}

int main(){

	cout<<"Questo programma esegue la divisione tra due numeri e poi viceversa \n";
	
	int primoNumero, secondoNumero;	
	cout<<"Inserisci il primo numero : \n";
	cin>>primoNumero;
	cout<<"Inserisci il secondo numero : \n";
	cin>>secondoNumero;
	
	//Eseguo la funzione due volte invertendo i paramentri che passo
	int differenzaAB=sottrazione(primoNumero, secondoNumero);		//la a della funzione è il primoNumero e la b è secondoNumero
	int differenzaBA=sottrazione(secondoNumero, primoNumero);		//la a della funzione è il secondoNumero e la b è primoNumero
	
	cout<<"La differenza tra il primo numero e il secondo numero e' : "<<differenzaAB<<endl;
	cout<<"La differenza tra il secondo numero e il primo numero e' : "<<differenzaBA<<endl;
	
	return 0;
}			
						

