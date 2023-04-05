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

articolo scontati[50];		//questo array conterrà i prodotti scontati

int main() {				   //scrittura | file binario  
	listino.open("4.negozio.dat", ios::out | ios::binary);
							  //scrittura | file binario
	sconti.open("4.sconti.dat", ios::out | ios::binary);
	
	articolo a;		//sarà una struct temporanea che conterrà l'articolo che via via inseriamo

	int i=0;		//indice che useremo per l'array degli articoli scontati e parte da 0

	
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
	//SCRIVE su file negozio.dat tutte le informazioni dentro "a" come se fossero dei char, scrivendo per la dimensione in byte di "a"
	listino.write((char*)&a, sizeof(a));
	//stampo l'articolo appena inserito
	cout<<"Art. "<<a.codice<<" - "<<a.descrizione<<" "<<a.prezzo<<" euro "<<" Qta "<<a.quantita<<" Stagione "<<a.stagione<<" \n";

	if(a.stagione==2){//verifico se "a" fa parte della stagione 2
		a.prezzo=a.prezzo-((a.prezzo*30)/100);		//applico lo sconto
		sconti.write((char*)&a, sizeof(a));			//scrivo lo sconto nel file sconti.dat
		memcpy(&scontati[i],&a,sizeof(a));			//copio "a" dentro il primo elemento dell'array degli scontati
		cout<<"Scontato "<<scontati[i].prezzo<<endl;	//stampo lo sconto applicato tramite l'elemento dell'array appena inserito
		i++;										//incremento l'indice dell'array degli scontati
	}
	
	
	cout<<"Vuoi inserire altro? \n";		//chiedo se ci sono altri elementi da inserire
	cin>>risposta;
	}while(risposta=="Si" ||risposta=="SI" ||risposta=="si" ||risposta=="sI"); //se scrivo si, ripeto il loop, altrimenti passo avanti
	
	//chiusura degli stream
	listino.close();
	sconti.close();
	
	char ricerca[50]; //conterrà l'elemento che vogliamo cercare successivamente
	cout<<"Inserisci la descrizione dell'oggetto da cercare \n";
	cin>>ricerca;
	
	
	ifstream scontistica;		//creo un nuovo stream dove analizzeremo gli array degli sconti
								   //lettura | file binario
	scontistica.open("4.sconti.dat", ios::in | ios::binary);
	
	int j=0;		//indice che useremo per l'array degli scontati per cercare l'elemento che ci serve
	cout<<"Sconti trovati : \n";
	
	//eof -> End Of File-> fine del file
	while(!scontistica.eof()){    // con il NOT diciamo "Fai il loop fino a quanto NON siamo alla FINE DEL FILE ovvero fino all'ultimo bit  del file binario specificato nello stream scontistica
		scontistica.read((char*)&scontati[j], sizeof(scontati[j]));	//scrivo in scontistica dal primo elemento dall'array sconti perchè j parte da 0
		
		//strcmp -> confronta il primo elemento con il secondo e vede se fa 0 ovvero se è true ovvero se sono uguali 
 		if(strcmp(scontati[j].descrizione,ricerca)==0){		
 			cout<<"Art. "<<scontati[j].codice<<" scontato a "<<scontati[j].prezzo<<endl;	//stampo a video l'elemento trovato con il suo codice articolo e prezzo scontato
 		}
 	j++;		//passa all'elemento successivo dell'array degli scontati
 	}
	
    //chiudo stream appena usato per la ricerca
	scontistica.close(); 

	return 0;
}
