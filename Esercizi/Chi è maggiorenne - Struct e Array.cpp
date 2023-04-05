#include <iostream>
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
	
	//Dati studenti già inseriti
	studenti[0].nome="Mario";
	studenti[0].cognome="Rossi";
	studenti[0].data_nascita.giorno=10;
	studenti[0].data_nascita.mese=8;
	studenti[0].data_nascita.anno=1999;
	cout<<"Info primo studente : ";
	//stampo le informazoni
	cout<<studenti[0].nome<<" "<<studenti[0].cognome<<" "<<studenti[0].data_nascita.giorno<<"-"<<studenti[0].data_nascita.mese<<"-"<<studenti[0].data_nascita.anno<<endl; 
	
	studenti[1].nome="Carlo";
	studenti[1].cognome="Biachi";
	studenti[1].data_nascita.giorno=2;
	studenti[1].data_nascita.mese=12;
	studenti[1].data_nascita.anno=2010;
	cout<<"Info secondo studente : ";
	//stampo le informazoni
	cout<<studenti[1].nome<<" "<<studenti[1].cognome<<" "<<studenti[1].data_nascita.giorno<<"-"<<studenti[1].data_nascita.mese<<"-"<<studenti[1].data_nascita.anno<<endl; 
	
	studenti[2].nome="Maria";
	studenti[2].cognome="Verdi";
	studenti[2].data_nascita.giorno=30;
	studenti[2].data_nascita.mese=2;
	studenti[2].data_nascita.anno=2005;
	cout<<"Info terzo studente : ";
	//stampo le informazoni
	cout<<studenti[1].nome<<" "<<studenti[2].cognome<<" "<<studenti[2].data_nascita.giorno<<"-"<<studenti[2].data_nascita.mese<<"-"<<studenti[2].data_nascita.anno<<endl; 
	studenti[3].nome="Paolo";
	studenti[3].cognome="Russo";
	studenti[3].data_nascita.giorno=18;
	studenti[3].data_nascita.mese=4;
	studenti[3].data_nascita.anno=1990;
	cout<<"Info quarto studente : ";
	//stampo le informazoni
	cout<<studenti[0].nome<<" "<<studenti[3].cognome<<" "<<studenti[3].data_nascita.giorno<<"-"<<studenti[3].data_nascita.mese<<"-"<<studenti[3].data_nascita.anno<<endl; 
	
	studenti[4].nome="Giovanna";
	studenti[4].cognome="Esposito";
	studenti[4].data_nascita.giorno=21;
	studenti[4].data_nascita.mese=12;
	studenti[4].data_nascita.anno=2003;
	cout<<"Info quinto studente : ";
	//stampo le informazoni
	cout<<studenti[4].nome<<" "<<studenti[4].cognome<<" "<<studenti[4].data_nascita.giorno<<"-"<<studenti[4].data_nascita.mese<<"-"<<studenti[4].data_nascita.anno<<endl; 
	cout<<endl;		//A CAPO
	
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
						

