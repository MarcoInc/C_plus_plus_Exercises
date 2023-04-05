#include <iostream>
#include <fstream>
#include <string.h>  //necessario per strcmp che useremo dopo per confrontare due array di char

using namespace std;

struct articolo{
	char codice[50];
	char descrizione[50];
	float prezzo;
	int quantita;
	int stagione;
};

fstream listino;	//stream che contiene il listino
fstream sconti;		//stream che contiene gli sconti
fstream scontistica;	//stream che utilizzeremo per la ricerca

int main() {				  
	listino.open("5.negozio.dat", ios::out);						 
	sconti.open("5.sconti.dat", ios::out);
	
	articolo a;		//sarà una struct temporanea che conterrà l'articolo che via via inseriamo
	
	int count=0;	//conterrò il numero di articoli scontati

	string risposta="si"; //settato a si così parte il do while e possiamo inserire il primo articolo
	do{
	cout<<"Inserisci codice articolo\n";
	cin>>a.codice;
	cout<<"Inserisci descrizione \n";
	cin>>a.descrizione;
	cout<<"Inserisci prezzo \n";
	cin>>a.prezzo;
	cout<<"Inserisci quantita' \n";
	cin>>a.quantita;
	cout<<"Inserisci stagione, 1 per autunno-inverno e 2 per primavera-estate \n";
	cin>>a.stagione;
	//SCRIVE su file negozio.dat tutte le informazioni in ordine separato da spazio e alla fine un a capo
	listino<<a.codice<<" "<<a.descrizione<<" "<<a.prezzo<<" "<<a.quantita<<" "<<a.stagione<<endl;
	//stampo l'articolo appena inserito
	cout<<"Art. "<<a.codice<<" - "<<a.descrizione<<" "<<a.prezzo<<" euro "<<" Qta "<<a.quantita<<" Stagione "<<a.stagione<<" \n";
	
	if(a.stagione==2){//verifico se "a" fa parte della stagione 2
		a.prezzo=a.prezzo-((a.prezzo*30)/100);						//applico lo sconto
		sconti<<a.codice<<" "<<a.descrizione<<" "<<a.prezzo<<" "<<a.quantita<<" "<<a.stagione<<endl;		//scrivo lo sconto nel file sconti.dat
		cout<<"Scontato "<<a.prezzo<<endl;			//stampo lo sconto applicato tramite l'elemento dell'array appena inserito		
		count++;			//ogni volta che trova uno sconto incrementa un contatore che useremo nel for per la ricerca		
	}
	
	cout<<"Vuoi inserire altro? \n";		//chiedo se ci sono altri elementi da inserire
	cin>>risposta;
	}while(risposta=="Si" ||risposta=="SI" ||risposta=="si" ||risposta=="sI"); //se scrivo si, ripeto il loop, altrimenti passo avanti

	
	articolo s;		//sarà un articolo temporaneo utilizzato per la ricerca dello sconto
	
			//apriamo il file sconti in modalità di lettura
	scontistica.open("5.sconti.dat", ios::in);
					
	char ricerca[50]; //nome che andremo a ricercare
	cout<<"Inserisci la descrizione dell'oggetto da cercare \n";
	cin>>ricerca;		//inseriamo il valore
	cout<<"Sconti trovati : \n";
	for(int i=0; i<count; i++){		//serve per scorrere le righe, ogni riga avra un oggetto scontato
			scontistica>>s.codice>>s.descrizione>>s.prezzo>>s.quantita>>s.stagione;		//assegna alla struct temporanea le informazioni in ordine di lettura dal file sconti.dat	
 			if(strcmp(s.descrizione,ricerca)==0){				//confronto
 				cout<<"Art. "<<s.codice<<" scontato a "<<s.prezzo<<endl;	//stampo a video l'elemento trovato con il suo codice articolo e prezzo scontato	
			}
	}
	
	//chiudo tutti gli stream
	listino.close();
	sconti.close();	
	scontistica.close();	
	
	return 0;
}
