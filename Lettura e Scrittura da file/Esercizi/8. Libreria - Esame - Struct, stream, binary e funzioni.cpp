#include <iostream>
#include <fstream> 

using namespace std;

struct catalogo{				
	char id_libro[50];		
	char autore[50];	
	char titolo[50];
    char editore[50];	
    int anno;	
    int prezzo;		
};
fstream f;	
catalogo libreria;
//la funzione prende in input la struct di tipo catalogo e permette l'inserimento. essendo un void non restituisce nulla
void inserimento(catalogo libro){
	f.open("8.gestione.dat", ios::app | ios::binary);		
	string risposta="si";
	do{
		cout<<"ID Libro \n";
		cin>>libro.id_libro;
		cout<<"Autore \n";
		cin>>libro.autore;
		cout<<"Titolo \n";
		cin>>libro.titolo;
		cout<<"Editore \n";
		cin>>libro.editore ;
		cout<<"Anno \n";
		cin>>libro.anno;
		cout<<"Prezzo \n";
		cin>>libro.prezzo;		
		f.write((char*)&libro,sizeof(libro));			
		cout<<"Vuoi inserire altro? \n";	
		cin>>risposta;
	}while(risposta=="Si" ||risposta=="SI" ||risposta=="si" ||risposta=="sI"); 
	f.close();	
	
}

//la funzione prende in input la struct di tipo catalogo e stampa gli elementi. essendo un void non restituisce nulla
void stampa(catalogo libro){
	f.open("8.gestione.dat", ios::in | ios::binary);	 		

	while(f.read((char*)&libro, sizeof(libro)));{
		cout<<libro.id_libro<<endl;
		cout<<libro.autore<<endl;
		cout<<libro.titolo<<endl;	
		cout<<libro.editore<<endl;
		cout<<libro.anno<<endl;
		cout<<libro.prezzo<<endl;
		cout<<endl;
	}
	f.close();
}

int main(){

	//chiamo le funzioni specificiate sopra passando la struct libreria che è di tipo catalogo
	inserimento(libreria);
	stampa(libreria);

	return 0;
}			
						

