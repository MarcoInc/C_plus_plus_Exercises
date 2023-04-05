#include <iostream>

using namespace std;
int main() {
	cout<<"Questo programma fa lo swap, ovvero scambia il valore tra due variabili 'PRIMO NUMERO' e 'SECONDO NUMERO' \n";
	int primoNumero, secondoNumero;
	cout<<"Inserisci il primo numero : \n";
	cin>>primoNumero;
	cout<<"Inserisci il secondo numero : \n";
	cin>>secondoNumero;
	
	int &copiaPrimo=primoNumero;
	int &copiaSecondo=secondoNumero;
	
	int temporaneo=primoNumero;
	
	
	
	return 0;
}			
						

