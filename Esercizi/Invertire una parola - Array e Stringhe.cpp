#include <iostream>
#include <string.h>
using namespace std;


//La funzione prende in input la stringa e la sua lunghezzza e un carattere
string cancellaCarattere(string stringa){	
	
	//temporaneo verrà usato nel for per conservare la il carattere che stiamo invertendo 
	char temporaneo;
	int j=stringa.length()-1;		//contiene l'indice dell'ultimo carattere
					
					//ad ogni ciclo, incremento i e decremento j
	for(int i=0; i<j; i++, j--){			//i parte dal primo carattere e j parte dall'ultimo carattere
		//uso una variabile temporanea
		temporaneo=stringa[i];							//temporaneo contiene il carattere i-esimo
		stringa[i]=stringa[j];							//il carattere i-esimo sarà uguale a quello j-esimo
		stringa[j]=temporaneo;					//il carattere j-esimo sarò uguale a quello temporaneo
		
	}
		
	return stringa;								//restituisco la stringa	
}



int main() {		
	cout<<"Questo programma inverte una parola \n";
	string stringa;
	cout<<"Inserisci una parola \n"<<endl;
	cin>>stringa;
	
	
	string stringaModificata=cancellaCarattere(stringa);		//alla funzione passo la stringa
	
	cout<<"Ecco la parola invertita \n"<<stringaModificata<<endl;				//stampo la nuova stringa
	

	return 0;

}			
						

