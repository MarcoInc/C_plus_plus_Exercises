//LIBRERIE
#include <iostream>				//Gestisce stream Input e Output -> fa funzionare il COUT e CIN
#include <string>				//Permette di usare le STRINGHE

using namespace std;

int main(){
	cout<<"IL PROGRAMMA VERIFICA SE IL NUMERO INSERITO E' PARI O DISPARI"<<endl;
	//Un numero è pari se lo divido per 2 abbiamo resto pari a 0. Se il resto è 1 il numero è dispari
	int numero;
	cout<<"Inserisci un numero "<<endl;
	cin>>numero;
	if(numero%2==0){			// Controllo il resto. Esegue il BLOCCO 1 se numero è pari, altrimenti esegue il BLOCCO 2 dopo l'else. 
		cout<<"Il numero inserito e' PARI"<<endl;	//BLOCCO 1
		
	}
	else{
		cout<<"Il numero inserito e' DISPARI"<<endl;		//BLOCCO 2
	}
	
	
	return 0;		
		
}




