//LIBRERIE
#include <iostream>				//Gestisce stream Input e Output -> fa funzionare il COUT e CIN
#include <string>				//Permette di usare le STRINGHE

using namespace std;

int main(){
	//CARATTERI ->si usano le ' '
	char carattere='C';			//CHAR->indica un singolo carattere
	char spazio=' ';			//lo SPAZIO è un carattere;
	char numero='2';			//questo 2 è un carattere e non un NUMERO
	cout<<"CHAR : "<<carattere<<spazio<<numero<<endl;
	
	//STRIGHE -> Insiemi di 1 o più caratteri - Si usano le " "
	string parola="CIAO";
	string spazioS=" ";
	string parola2="MONDO";
	cout<<"STRINGs : "<<parola<<spazio<<parola2<<endl;		//STAMPO A VIDEO parola seguito da spazio seguito da parola2
	
	return 0;		
		
}




