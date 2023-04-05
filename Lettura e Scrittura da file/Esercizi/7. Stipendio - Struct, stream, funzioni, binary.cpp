#include <iostream>
#include <fstream> //permette l'uso dei file input.txt e output.txt

using namespace std;

struct dipendente{				//contiene informazioni tipiche di una Persona
	char nome[50];			//il nome di massimo 10 char
	char cognome[50];		//il cognome di massimo 10 char
    int stipendio;		//stipendio indicato da un int
};

fstream f;		//stream che contiene i dipendenti
fstream g;		//stream che contiene i dipendenti che hanno stipendio maggiore di un tot

//FUNZIONE PER CERCARE CHI PRENDE PIU' DI UNO STIPENDIO INDICATO NEL MAIN

void checkStipendio(struct dipendente a, int stipendio){		//Prende in input una struct di tipo dipendente e un int per lo stipendio
	f.open("7.dipendenti.dat", ios::in | ios::binary);	 		//apro il flusso in modalità "in"->lettura
	g.open("7.stipendio_alto.dat", ios::app | ios::binary); 	 //apro un flusso per inserire gli stipendi più alti del valore chei inseriremo in modalità appEND	

	//lettura del file 7.stipendi_alti.dat riga per riga
	while(f.read((char*)&a,sizeof(a))){
		if (a.stipendio>stipendio){						//vedo se lo stipendio di un dipendente è maggiore dello stipendio passato come parametro
			g.write((char*)&a, sizeof(a));				//in tal caso lo scrivo sul file
		}	
	}
	//chiudo gli  stream
	f.close();
	g.close();
	
	//A CAPO
	cout<<endl;
	//apro il file in modalità lettura ->"in"
	g.open("7.stipendio_alto.dat", ios::in | ios::binary);
	
	cout<<"I dipendenti che prendono piu' di "<<stipendio<<" sono : \n";
	
	//lettura del file 7.stipendi_alti.dat riga per riga
	while(g.read((char*)&a, sizeof(a))){
		cout<<a.nome<<" "<<a.cognome<<" - "<<a.stipendio<<" euro \n";	//stampo il contenuto di stipendi_alti.dat
	}
	g.close();
}

int main(){
	f.open("7.dipendenti.dat", ios::app | ios::binary);		
	
	dipendente a;	//sarà una struct temporanea che conterrà i dati che verranno inseriti e passato nella funzione
	string risposta="Si";
	
	do{
		cout<<"Nome \n";
		cin>>a.nome;
		cout<<"Cognome \n";
		cin>>a.cognome;
		cout<<"Stipendio \n";
		cin>>a.stipendio;
		f.write((char*)&a,sizeof(a));			//scrivo le informazioni appena salvate dentro il flusso "f", quindi nel file 7.dipendenti.dat
		cout<<"Vuoi inserire altro? \n";		//chiedo se ci sono altri elementi da inserire
		cin>>risposta;
	}while(risposta=="Si" ||risposta=="SI" ||risposta=="si" ||risposta=="sI"); //se scrivo si, ripeto il loop, altrimenti passo avanti
	f.close();	//chiudo il file
	
	int stipendioToCheck;
	cout<<"Inserisci uno stipendio che vuoi controllare \n";
	cin>>stipendioToCheck;
	cout<<endl;//A CAPO
	
	//passo come parametro
	checkStipendio(a,stipendioToCheck);
   
	return 0;
}			
						

