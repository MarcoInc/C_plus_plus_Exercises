#include <iostream>
#include <string.h>
using namespace std;


//La funzione prende in input la stringa e la sua lunghezzza e un carattere
string minuscolo(string stringa){	
	int lunghezza=stringa.length();			//lunghezza stringa
	for(int i=0; i<lunghezza; i++){			//scorro tutta la stringa
		stringa[i]+=32;						//Una lettera minuscola 'dista' 32 dal suo corrispettivo MAIUSCOLO in avanti
		
	}
	return stringa;								//restituisco la stringa	
}

string maiuscolo(string stringa){	
	int lunghezza=stringa.length();			//lunghezza stringa
	for(int i=0; i<lunghezza; i++){			//scorro tutta la stringa
		stringa[i]-=32;						//Una lettera MAIUSCOLA 'dista' 32 dal suo corrispettivo minuscolo in indietro
		
	}
	return stringa;								//restituisco la stringa	
}


int main() {		
	cout<<"Questo programma trasforma una parola in minuscolo a MAIUSCOLO e viceversa \n";
	string stringa1;
	cout<<"Inserisci una parola in MAIUSCOLO"<<endl;
	cin>>stringa1;
	
	string stringaMinuscolo=minuscolo(stringa1);		//alla funzione passo la stringa
	cout<<"Ecco la stringa in minuscolo \n"<<stringaMinuscolo<<endl;				//stampo la nuova stringa
	

	string stringa2;
	cout<<"Adesso inserisci una parola in minuscolo"<<endl;
	cin>>stringa2;
	
	string stringaMaiuscolo=maiuscolo(stringa2);		//alla funzione passo la stringa
	cout<<"Ecco la stringa in MAIUSCOLO \n"<<stringaMaiuscolo<<endl;				//stampo la nuova stringa
	

	return 0;

}			
						

