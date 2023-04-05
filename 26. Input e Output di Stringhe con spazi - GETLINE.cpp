#include <iostream>
#include <string.h>


using namespace std;





int main() {		
	char stringa[100];		//la stringa in verità è un array di DIM_MAX caratteri
	cout<<"Inserisci una stringa qualunque di massimo 100 caratteri"<<endl;
	
		//cin.getline prende tutto ciò che si scrive da tastiera compresi gli spazi , ma dobbiamo sapere la dimensione dell'input
	cin.getline(stringa,100);	//salva quello che scriviamo in stringa 
	
	cout<<"Frase inserita \n"<<stringa<<endl;				//stampo la nuova stringa
	
	return 0;
}

						

