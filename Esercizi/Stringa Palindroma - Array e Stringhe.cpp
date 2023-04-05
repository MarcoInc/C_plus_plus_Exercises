#include <iostream>
#include <string.h>
using namespace std;


//La funzione prende in input la stringa e la sua lunghezzza e un carattere
bool isPalindroma(string stringa){
	
	//indice dell'ultimo elemento
	int j=stringa.length()-1;
	
					   //scrorro due indici. I parte dal primo e j parte dall'ultimo
 	for (int i=0; i<j; i++, j--) {	//i viene incrementato e j viene decrementato ad ogni ciclo
		if(stringa[i] != stringa[j]){		//se la i-esima è diversa dalla j-esima non è palindroma
    		return false;			//restituisco un false
   		}
	}
 	return true;		//se dopo che ho controllato tutti i caratteri non ho nessun false, significa che la stringa è palindroma
}



int main() {		
	cout<<"Questo verifica se la stringa inserita è palindroma \n";
	string stringa;
	cout<<"Inserisci una parola senza spazi"<<endl;
	cin>>stringa;
	
	//controllo l'esito della funzione
	if(isPalindroma(stringa)==true)		//se da esito true è palindroma
		cout<<"E' palindroma \n";	
	if(isPalindroma(stringa)==false)	//se da esito false non è palindroma
		cout<<"Non e' palindroma \n";	
	

	return 0;

}	


		
						

