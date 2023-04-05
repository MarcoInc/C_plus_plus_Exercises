#include <iostream>
#include <fstream> //permette l'uso dei file input.txt e output.txt

using namespace std;


//altra struct
struct Persona{				//contiene informazioni tipiche di una Persona
	string nome;			//il nome di massimo 10 char
	string cognome;		//il cognome di massimo 10 char
    int salario;		//stipendio indicato da un int
};

//Creazione di un array di struct
struct Persona dipendenti[10];		//Array di 10 Persona chiamata dipendenti
//ogni elemeento avrà un nome, cognome e uno stipendio


void checkStipendio(struct Persona dipendenti[], int stipendio){		//Prende in input un array di struct di tipo Persona e un int per lo stipendio
	ofstream out;           //creo un flusso stream out
	out.open("3.output.txt"); //strean out che utilizzeremo come destinazione output
	for(int i=0; i<10; i++){
		if(dipendenti[i].salario<stipendio){		//controlla se lo stipendio di ogni singolo dipentente è minore del valore inserito
            out<<dipendenti[i].nome<<" "<<dipendenti[i].cognome<<" "<<dipendenti[i].salario<<endl;           //scriviamo nel file di output (come cout)
            cout<<dipendenti[i].nome<<" "<<dipendenti[i].cognome<<" "<<dipendenti[i].salario<<endl;          //stampo a video quello che mette in output
        }
	}
}

int main(){
	ifstream in;            //creo un flusso stream in
    in.open("3.input.txt");   //stream in che utilizzeremo come sorgente input
   
    
	//Inserisco da tastiera la lo stipendio da controllare
	int stipendio;
	cout<<"Inserisci uno stipendio\n";
	cin>>stipendio;
	cout<<endl;//A CAPO
    
    //so che il file ha 10 righe/task
    for(int rigo=0; rigo<10;rigo++){	//leggo riga per riga		Mario Rossi 1200
    	//so che il primo elemento letto per rigo è il nome		 ^
    	in>>dipendenti[rigo].nome;								//leggo il primo elemento dal file
    	cout<<dipendenti[rigo].nome<<" ";							//stampo a video il primo elemento letto dal file
    	
    	//so che il secondo elemento è il cognome				Mario Rossi 1200
        //																^
    	in>>dipendenti[rigo].cognome;								//leggo il secondo elemento dal file
    	cout<<dipendenti[rigo].cognome<<" ";						//stampo a video il secondo elemento letto dal file
    	
    	//so che il terzo elemento è lo stipendio			 	Mario Rossi 1200
    	//																	  ^
		in>>dipendenti[rigo].salario;								//leggo il secondo elemento dal file
    	cout<<dipendenti[rigo].salario<<endl;		
									 
	}
	cout<<endl;	//A CAPO
	
	cout<<"Prende meno di "<<stipendio<<" euro \n";
	checkStipendio(dipendenti,stipendio);

	return 0;
}			
						

