//LIBRERIE
#include <iostream>				//Gestisce stream Input e Output -> fa funzionare il COUT e CIN
#include <string>				//Permette di usare le STRINGHE

using namespace std;

int main(){
		
	char lettera;
	int ASCII;
	cout<<"Inserisci un numero da 32 a 127 e ti diro' il corrispettivo ASCII \n\n";
	cout<<"Da 65 a 90 si hanno le lettere MAIUSCOLE A-Z \n";
	cout<<"Da 97 a 122 si hanno le lettere minuscole a-z \n";
	cout<<"Gli altri valori sono simboli come ! < ; . : ] ecc.\n";
	cin>>ASCII;
	lettera=ASCII;
	
	cout<<"La il simbolo ASCII corrispondente e' \n\n";
	cout<<lettera<<endl;
	
	return 0;		
		
}




