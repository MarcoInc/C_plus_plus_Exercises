#include <iostream>
#include <fstream> //permette l'uso dei file input.txt e output.txt

using namespace std;

//Struct è una struttura dati che contiene dati anche di tipo diverso
struct data{		//struttura che contiene informazioni tipiche di una data
	int giorno;			
	int mese;
	int anno;
};  
//altra struct
struct Persona{				//contiene informazioni tipiche di una Persona
	string nome;			//il nome di massimo 10 char
	string cognome;		//il cognome di massimo 10 char
    data data_nascita;	//STRUCT ANNIDATA , dentro persona inseriamo pure le informazioni tipiche di una data di nascita.
};

//Creazione di un array di struct
struct Persona studenti[5];		//Array di 5 Persona chiamata studenti
//ogni elemeento avrà un nome, cognome e una data di nascita composta da giorno, mese e anno

int main(){
	ifstream in;            //creo un flusso stream in
    in.open("2.input.txt");   //stream in che utilizzeremo come sorgente input
    
	//Inserisco da tastiera la data di oggi
	int giorno, mese, anno;
	cout<<"Inserisci la data di oggi \n";
	cout<<"Giorno :\n";
	cin>>giorno;
	cout<<"Mese :\n";
	cin>>mese;
	cout<<"Anno :\n";
	cin>>anno;
	cout<<endl;//A CAPO
    
    //so che il file ha 5 righe/task
    for(int rigo=0; rigo<5;rigo++){	//leggo riga per riga		Mario Rossi 10 8 1999
    	//so che il primo elemento letto per rigo è il nome		 ^
    	in>>studenti[rigo].nome;								//leggo il primo elemento dal file
    	cout<<studenti[rigo].nome<<" ";							//stampo a video il primo elemento letto dal file
    	
    	//so che il secondo elemento è il cognome				Mario Rossi 10 8 1999
        //																^
    	in>>studenti[rigo].cognome;								//leggo il secondo elemento dal file
    	cout<<studenti[rigo].cognome<<" ";						//stampo a video il secondo elemento letto dal file
    	
    	//so che il terzo elemento è il giorno di nascita		Mario Rossi 10 8 1999
    	//																	^
    	in>>studenti[rigo].data_nascita.giorno;					//leggo il terzo elemento dal file
    	cout<<"del "<<studenti[rigo].data_nascita.giorno<<"-";	//stampo a video il terzo elemento letto dal file seguito da -
    	
    	//so che il quarto elemento è il mese di nascita		Mario Rossi 10 8 1999
    	//																	   ^
		in>>studenti[rigo].data_nascita.mese;					//leggo il quarto elemento dal file
		cout<<studenti[rigo].data_nascita.mese<<"-";			//stampo a video il quarto elemento letto dal file seguito da -
		
		//so che il quinto elemento è il l'anno di nascita		Mario Rossi 10 8 1999
		//																		   ^
		in>>studenti[rigo].data_nascita.anno;					//leggo il quinto elemento dal file
		cout<<studenti[rigo].data_nascita.anno<<endl;			//stampo a video il quinto elemento letto dal file
	}
	cout<<endl;	//A CAPO
	
	//scorro tutto l'array di studenti
	for(int i=0; i<5; i++){
		if(anno-studenti[i].data_nascita.anno<18)  //se ha meno di 18 anni in base all'anno è minorenne
			cout<<studenti[i].nome<<" "<<studenti[i].cognome<<" e' minorenne \n";	
				
		else if(anno-studenti[i].data_nascita.anno>18)  //se ha più di 18 anni in base all'anno è maggiorenne
			cout<<studenti[i].nome<<" "<<studenti[i].cognome<<" e' maggiorenne \n";	
		
		//se è nato nel 18-esimo anno dobbiamo controllare il mese
		else if(anno-studenti[i].data_nascita.anno==18){	
		
			if(studenti[i].data_nascita.mese<mese)			//se il mese di nascita viene prima il mese di oggi è maggiorenne
				cout<<studenti[i].nome<<" "<<studenti[i].cognome<<" e' maggiorenne \n";
		
			else if(studenti[i].data_nascita.mese>mese)			//se il mese di nascita viene dopo il mese di oggi	è minorenne
				cout<<studenti[i].nome<<" "<<studenti[i].cognome<<" e' minorenne \n";
			
			//se il mese di nascita è uguale al mese di oggi dobbiamo controllare il giorno
			else if(studenti[i].data_nascita.mese==mese){		
			
				if(studenti[i].data_nascita.giorno<=giorno)			//se il giorno di nascita viene prima il giorno di oggi ed è uguale al giorno di oggi -> fa il compleanno oggi è maggiorenne
						cout<<studenti[i].nome<<" "<<studenti[i].cognome<<" e' maggiorenne \n";
			
				else if(studenti[i].data_nascita.giorno>giorno)			//se il giorno di nascita viene dopo il giorno di oggi è minorenne
						cout<<studenti[i].nome<<" "<<studenti[i].cognome<<" e' minorenne \n";
						
			}//fine if giorno		
		}//fine if mese			
	}//fine for

	return 0;
}			
						

