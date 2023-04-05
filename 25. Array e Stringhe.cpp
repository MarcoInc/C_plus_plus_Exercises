#include <iostream>

using namespace std;
int main() {
	//Una STRINGA e' da considerarsi un ARRAY di CHAR e come tale può essere trattato come un array
	
	string stringa="Viva la pizza margherita";
	int lunghezzaStringa=stringa.length();		//estraiamo la dimensione della stringa
	cout<<"STRINGA INIZIALE : "<<stringa<<endl;
	
	cout<<"CARATTERI ESTRATTI DALLA STRINGA INZIALE\n";
	for(int i=0 ; i<lunghezzaStringa ; i++){
		cout<<stringa[i]<<"  ";			//estraiamo ogni singolo char che compone la stringa
	}
	cout<<endl<<endl;
	
	stringa[0]='O';
	stringa[1]='d';
	stringa[2]='i';
	stringa[3]='o';
	cout<<"STRINGA MODIFICATA : "<<stringa<<endl;
	
	cout<<"CARATTERI ESTRATTI DALLA STRINGA MODIFICATA\n";
	for(int i=0 ; i<lunghezzaStringa ; i++){
		cout<<stringa[i]<<"  ";			//estraiamo ogni singolo char che compone la stringa
	}
	
	return 0;
}			
						

