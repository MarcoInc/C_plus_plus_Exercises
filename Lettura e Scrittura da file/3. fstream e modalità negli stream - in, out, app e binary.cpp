#include <iostream>
#include <fstream> //permette l'uso dei file input.txt e output.txt

using namespace std;

//fstream è uno stream che può essere usato sia per input che per output in base alle modalità che possono essere specificate dopo
fstream in;			//flusso in modalità LETTURA con ios::out -> i dati verranno letti
fstream out;		//flusso in modalità SCRITTURA con ios::in-> i dati verrano scritti
fstream appEND;		//flusso in modalità APPEND con ios::app  -> i dati verranno scritti via via senza sovvrascrivere quelli vecchi
fstream bin;		//flusso in modalità BINARIO con ios::bin -> dati in formato grezzo e non di tipo testo
//le modalità possono essere combinate tra loro separandole con | <-Simbolo di PIPE.Quindi 		ios::app | ios::bin		significa in modalita APPEND e BINARIO

int main(){
	
	//creo un flusso in modalità SCRITTURA e ogni volta che avvio il programma, il contenuto del file viene cancellato per inserirne di nuovo
	in.open("3.fstream.dat", ios::out);
	in<<"ciao";
  	in.close();
  	
  	//creo un flusso in modalità LETTURA
  	out.open("3.fstream.dat", ios::in);
  	char prova[5];
  	out>>prova;
  	cout<<prova<<endl;	//stampo il contenuto del file
  	out.close();
  	
  	//creo un flusso in modalità SCRITTURA e ogni volta che avvio il programma, il contenuto del file viene mantenuto e quello nuovo viene aggiunto a quello vecchio
  	appEND.open("3.fstreamAPP.dat" , ios::app);
  	appEND<<"Ciao Mondo \n";  	
  	out.close();
  	
  	//creo un flusso in modalità SCRITTURA e BINARIO -> vengono inseriti i dati grezzi e non possiamo usare gli operatori << e >>
  	bin.open("3.fstreamBIN.dat" , ios::out | ios::binary);
  	char nome[6]={'C','A','R','L','O'};
  	//sizeof(QUALCOSA) -> restituisce la dimensione in byte di QUALCOSA
  	bin.write(nome,sizeof(nome));	//scrive i primi sizeof(nome) elementi elementi di nome nello stream
  	bin.close();
  	
  	//creo un flusso in modalità LETTURA e BINARIO 
  	bin.open("3.fstreamBIN.dat" , ios::in | ios::binary);
  	char nomeEstratto[6];
	while(bin.read(nomeEstratto,sizeof(nomeEstratto))	//legge i primi sizeof(nomeEstratto) elementi nel file e li mette in "nomeEstratto", con il while lo fa riga per riga
 		cout<<nomeEstratto;						//stampiamo il valore appena estratto
  	bin.close();
  	
    return 0;
}
