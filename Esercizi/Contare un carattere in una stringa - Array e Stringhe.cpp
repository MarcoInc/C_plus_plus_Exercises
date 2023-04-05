#include <iostream>
#include <string.h>
using namespace std;


//La funzione prende in input la stringa e la sua lunghezzza e un carattere
int contaCarattere(string stringa, char carattere){		
	int lunghezza=stringa.length();	//lunghezza stringa
	int count=0;					//contatore che parte da zero
	for(int i=0; i<lunghezza; i++){			//scorro tutto l'array di caratteri
	
		if(stringa[i]==carattere){				//se il carattere è presente in quella posizione
			count++;						//incremento il contatore
		}
	}

	return count;								//restituisco il contatore	

}



int main() {		
	cout<<"Questo programma in una stringa un carattere che specifichiamo \n";
	string stringa="Nel mezzo del cammin di nostra vita, mi ritrovai in una selva oscura, che diritta via era smarita \n";
	cout<<stringa;
	
	
	char carattere;
	cout<<"Quale carattere vuoi contare? "<<endl;
	cin>>carattere;
	
	int contatore=contaCarattere(stringa, carattere);		
	
	cout<<"Il carattere "<<carattere<<" compare "<<contatore<<" volte \n";

	return 0;

}			
						
