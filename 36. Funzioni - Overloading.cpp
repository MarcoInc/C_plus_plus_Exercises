#include <iostream>
using namespace std;

//OVERLOADING DI UNA FUNZIONE
//Una funzione overloaded o sovvracariata è una funzione che ha un numero o tipi diversi di parametri formali
//il tipo di ritorno deve essere il medesimo

void stampa(int numeroInt){				//la funzione prende un intero come input
	cout<<numeroInt<<endl;	
}

void stampa(string stringa){	//La funzione ha mantenuto lo stesso nome ma prende una stringa in input
	cout<<stringa<<endl;	
}
void stampa(double numeroDouble){	
	cout<<numeroDouble<<endl;	
}

void stampa(int numeroInt, string stringa ,double numeroDouble){	//La funzione prende un intero, una stringa e un double in input
	cout<<numeroInt<<endl;	
	cout<<stringa<<endl;	
	cout<<numeroDouble<<endl;	
}





int main(){
	
	int intero;
	cout<<"Inserisci un int"<<endl;
	cin>>intero;
	cout<<"Hai inserito : ";
	stampa(intero);			//il compilatore sa che è un intero, esegue void stampa(int numeroInt)
	cout<<endl;
	
	
	string stringa;
	cout<<"Inserisci una stringa"<<endl;
	cin>>stringa;
	cout<<"Hai inserito : ";
	stampa(stringa);			//esegue void stampa(string stringa)
	cout<<endl;
	
	double numVirgola;
	cout<<"Inserisci un double"<<endl;
	cin>>numVirgola;
	cout<<"Hai inserito : ";
	stampa(numVirgola);		//esegue void stampa(double numeroDouble)
	cout<<endl;
	
	cout<<"Stampo tramite overloading cambiando il numero di parametri"<<endl;
	stampa(intero,stringa,numVirgola);		//void stampa(int numeroInt, string stringa ,double numeroDouble)

	return 0;
}			
						

