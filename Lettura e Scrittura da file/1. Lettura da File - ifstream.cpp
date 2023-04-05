#include <iostream>
#include <fstream> //permette l'uso degli stream

using namespace std;

int main(){
    ifstream in;            //creo un flusso stream input chiamato in
    in.open("1. input.txt");   //apre il file e lo inserisce nello stream
    string nome;  
    string cognome;
    int eta;
	
	
	//lo stream viene scorso, e ogni volta che facciamo un in>> viene ripreso dove è stato interrotto
		
	for(int rigo=0; rigo<3; rigo++){ //So che le righe sono 3
		
		/*
		so che il file, all'inizio ci sta una stringa	
		Mario Rossi 40
		^^^^	
		*/
	    in>>nome;		//dentro nome metto il primo rigo
	    //non parte dall'inizio ma dove abbiamo finito di leggere il primo elemento letto
	    
	    
	    /*
		so che dopo il nome ci sta una stringa
		Mario Rossi 40
		  	  ^^^^	
		*/
	    in>>cognome;		//dentro cognome metto quello che sta dopo la lettura precedente
	    
	    /*
		so che dopo il cognome ci sta un numero
		Mario Rossi 40
		  	 		^^	
		*/
		in>>eta;			//dentro eta metto il numero
	
	
		//stampo gli elementi appena letti da file
		cout<<nome<<" ";      
		cout<<cognome<<" ";      
		cout<<"di "<<eta<<" anni"<<endl;   	
	}
	//finita la riga, passa a quella successiva, fino alla terza riga
		    
    in.close();                  //chiudo lo stream IN
    return 0;
}




