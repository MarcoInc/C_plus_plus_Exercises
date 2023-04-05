//LIBRERIE
#include <iostream>				//Gestisce stream Input e Output -> fa funzionare il COUT e CIN
#include <string>				//Permette di usare le STRINGHE

using namespace std;

int main(){
		
	//STRIGHE -> Insiemi di 1 o più caratteri - Si usano le " "
	string parola="CIAO";
	string spazioS=" ";
	string parola2="MONDO";
	
	string frase=parola+spazioS+parola2;		//CONCATENAZIONE DI STRINGHE -> UNIONE di stringhe in una sola
	cout<<frase<<endl;
	
	int lungStringa=frase.length();				//CONTA I CARATTERI dell'intera Stringa
	//int lungFrase=frase.size();				//ALIAS, è uguale ad usare LENGTH();
	cout<<"LUNGHEZZA STRINGA : "<<lungStringa<<endl;

	
	string sottoStringa=frase.substr(5,10);	//ESTRAE UNA SOTTO STRINGA dal quinto+1 al decimo carattere+1 -> una stringa parte sempre da 0
	cout<<"SOTTOSTRINGA : "<<sottoStringa<<endl;
	
	return 0;		
		
}




