#include <iostream>

using namespace std;

int main(){

	int primo=10;
    cout<<primo<<endl; //stampa il valore della variabile

	int* ptr; //creo un puntatore ad un intero
    ptr=&primo; //assegno all'indirizzo che punta ptr, l'indirizzo di primo

    cout<<*ptr<<endl; //stampa il valore puntato 
    cout<<ptr<<endl; //stampa il l'indirizzo del valore puntato 

    int secondo=20;

    *ptr=secondo; //cambio il valore del valore puntato da ptr con il valore di secondo

    cout<<primo<<endl; //valore di a cambiato
	
    return 0;
}