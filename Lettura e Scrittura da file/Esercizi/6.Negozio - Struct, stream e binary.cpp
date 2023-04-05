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

fstream f;	//stream che contiene il listino
fstream g;		//stream che contiene gli sconti


int main() {				  //appNED ->il file inserirà alla fine dati nuovi mantenendo quelli vecchi ad ogni avvio del programma
	f.open("6.negozio.dat", ios::app | ios::binary);		
					 
	articolo a;		//sarà una struct temporanea che conterrà l'articolo che via via inseriamo
	
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
	f.write((char*)&a,sizeof(a));	//scrivo le informazioni appena salvate dentro il flusso "f", quindi nel file 6.negozio.dat
	cout<<"Vuoi inserire altro? \n";		//chiedo se ci sono altri elementi da inserire
	cin>>risposta;
	}while(risposta=="Si" ||risposta=="SI" ||risposta=="si" ||risposta=="sI"); //se scrivo si, ripeto il loop, altrimenti passo avanti
	f.close();	//chiudo il file
	

	f.open("6.negozio.dat", ios::in | ios::binary);	 	//apro nuovamente il flusso in modalità "in"->lettura
	g.open("6.sconti.dat", ios::app | ios::binary);  //apro un flusso per gli sconti in modalità appEND
	
	//lettura del file 6.negozio.dat riga per riga
	while(f.read((char*)&a,sizeof(a))){
		if (a.stagione==2){		//vedo se l'oggetto in questione è della stagione 2
			a.prezzo=a.prezzo-(a.prezzo*30)/100;		//applico lo sconto
			g.write((char*)&a, sizeof(a));				//scrivo l'articolo scontato nel file 6.sconti.dat
		}	
	}
	f.close();
	g.close();
	cout<<endl;
	//apro il file in modalità lettura ->"in"
	g.open("6.sconti.dat", ios::in | ios::binary);
	

	cout<<"Ho trovato i seguenti prodotti scontati : \n";
	//lettura del file 6.sconti.dat riga per riga
	while(g.read((char*)&a, sizeof(a))){
		cout<<"Art. "<<a.codice<<" - "<<a.descrizione<<" "<<a.quantita<<" pezzi scontato a "<<a.prezzo<<endl;
	}
	g.close();
	
		//apro il file in modalità lettura ->"in"
	g.open("6.sconti.dat", ios::in | ios::binary);
	char confronto[50];
	cout<<"Inserisci la descrizione dell'oggetto scontato da cercare \n";
	cin>>confronto;
	bool flag=0; //verrà usato per vedere se la lista degli oggetti scontati è piena o vuota
	
	//lettura riga per riga
	while(g.read((char*)&a, sizeof(a))){
		if(strcmp(a.descrizione,confronto)==0){
			flag=1;		//se c'è almeno un oggetto diventa 1
			cout<<"Art. "<<a.codice<<" scontato a "<<a.prezzo<<endl;
		}
		if(flag==0)		//se il flag rimane a 0 significa che non ci sta nessun articolo scontato
			cout<<"Non ho trovato nulla \n";
	}
	g.close();
	
	return 0;
}
