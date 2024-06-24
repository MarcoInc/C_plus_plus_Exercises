#include <iostream>
using namespace std;

//CHIAMATA PER SECONDA
void stampa(string a){			//viene richiamata dalla funzione successiva
	cout<<a<<endl;;				//stampo la stringa	
}

//CHIAMATA PER PRIMA
int addizione(int a, int b, string s){	//la stringa verrà usata per richiamare un'altra funzione
	int somma=a+b;	
	stampa(s);			//chiamo la funzione da un'altra funzione in precedenza dichiarata. Stamperà la stringa
	stampa(s);			//posso chiamarla tutte le volte che voglio
	return somma;		
}


int main() {		//IL PROGRAMMA PARTE SEMPRE DAL MAIN

	string stringa="CIAO MONDO";
	
	cout<<"Funzione stampa dalla funzione addizione tra 10 e 50 : \n";
	cout<<addizione(10,50, stringa)<<endl;		//oltre a due numeri da sommare, passo anche la stringa
	cout<<"Funzione stampa dal MAIN : \n";
	stampa(stringa);					//chiamo la funzione dal main
	return 0;	

}

						

