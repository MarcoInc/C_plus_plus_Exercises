#include <iostream>
using namespace std;

//Struct è una struttura dati che contiene dati, anche di tipo diverso
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
struct Persona studenti[2];		//Array di 2 Persona chiamata studenti
//ogni elemeento avrà un nome, cognome e una data di nascita composta da giorno, mese e anno


int main(){
	
	//Inizializzazione del primo studente da codice
	studenti[0].nome="Mario";
	studenti[0].cognome="Rossi";
	studenti[0].data_nascita.giorno=10;
	studenti[0].data_nascita.mese=8;
	studenti[0].data_nascita.anno=1999;
	cout<<"Info primo studente : \n";
	//stampo le informazoni
	cout<<studenti[0].nome<<" "<<studenti[0].cognome<<" "<<studenti[0].data_nascita.giorno<<"-"<<studenti[0].data_nascita.mese<<"-"<<studenti[0].data_nascita.anno<<endl; 
	
	
	//Inizializzazione del secondo studente con cin
	cout<<"Inserisci info del secondo studente :\n";
	cout<<"Nome :\n";
	cin>>studenti[1].nome;
	cout<<"Cognome :\n";
	cin>>studenti[1].cognome;
	cout<<"Giorno della data di nascita :\n";
	cin>>studenti[1].data_nascita.giorno;
	cout<<"Mese della data di nascita :\n";
	cin>>studenti[1].data_nascita.mese;
	cout<<"Anno della data di nascita :\n";
	cin>>studenti[1].data_nascita.anno;
	
	cout<<"Info secondo studente che hai inserito: \n";
	//stampo le informazoni
	cout<<studenti[1].nome<<" "<<studenti[1].cognome<<" "<<studenti[1].data_nascita.giorno<<"-"<<studenti[1].data_nascita.mese<<"-"<<studenti[1].data_nascita.anno<<endl;


	return 0;
}			
						

