#include <iostream>
#include <string.h>
using namespace std;


//La funzione prende in input la stringa e la sua lunghezzza e un carattere
string cancellaCarattere(string stringa, char carattere){	
	int lunghezza=stringa.length();			//lunghezza stringa
	for(int i=0; i<lunghezza; i++){			//scorro tutta la stringa
		
		if(stringa[i]==carattere){				//se il carattere di indice i è uguale a carattere
			stringa[i]='-';						//lo stostiuisco con un trattino
		}
		
	}
	return stringa;								//restituisco la stringa	
}



int main() {		
	cout<<"Questo programma elimina da una stringa da noi scritta , un carattere che specifichiamo \n";
	string stringa;
	cout<<"Inserisci una stringa senza spazi"<<endl;
	cin>>stringa;
	
	
	char carattere;
	cout<<"Quale carattere vuoi cancellare? "<<endl;
	cin>>carattere;
	
	string stringaModificata=cancellaCarattere(stringa, carattere);		//alla funzione passo la stringa, la lunghezza delle stringa e il carattere da cancellare
	
	cout<<"Ecco la stringa modificata \n"<<stringaModificata<<endl;				//stampo la nuova stringa
	
		
	


	return 0;

}			
						

