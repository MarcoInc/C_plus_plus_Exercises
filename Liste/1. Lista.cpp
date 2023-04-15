/*UNA LISTA PERMETTE DI ALLOCARE ELEMENTI QUANDO ESSI MI SERVONO. POSSO ALLOCARE UN NUMERO INDEFINITO DI LEMENTI
OGNI ELEMENTO DI UNA LISTA E' CHIAMATO NODO, ED E FORMATO DA DUE ELEMENTI:
*INFORMAZIONE	->	DATO CHE STIAMO MEMORIZZANDO
*PUNTATORE ALL'ELLEMENTO SUCCESSIVO		->	LEGAME AL PROSSIMO NODO 
					|  5  ,  *  |	ovvero  	|INFORMAZIONE  ,  PUNTATORE|
					
QUINDI OGNI ELEMENTO OLTRE A CONTENERE L'INFORMAZIONE, PUNTERA' ALL'ELEMENTO SUCCESSIVO FINO ALLA FINE
		NODI PARTICOLARI
TESTA E' IL PRIMO NODO E NON E' PUNTATATO DA NULLA					
CODA E' L'ULTIMO NODO E NON PUNTA A NIENTE

TESTA	 NODO	   CODA
|5,*| -> |2,*| -> |20,*| -> null
 I�	      II�	   III�		 
  
LA TESTA CHE CONTIENE 5, PUNTA AL SECONDO ELEMENTO CHE CONTIENE 2.
IL SECONDO ELEMENTO CHE CONTIENE 2 PUNTA AL TERZO ELEMENTO CHE CONTIENE 20.
IL TERZO ELEMENTO CHE CONTIENE 20 PUNTA A NIENTE QUINDI E' UNA CODA.

SE AGGIUNGO UN NUOVO NODO, QUESTO SARA' UNA NUOVA CODA
 
TESTA	 NODO	   NODO		 CODA
|5,*| -> |2,*| -> |20,*| -> |12,*| -> null
 I�	      II�	   III�		 IV�

*/
#include <iostream>				//Gestisce stream Input e Output -> fa funzionare il COUT e CIN
#include <string>				//Permette di usare le STRINGHE
using namespace std;

struct nodo{
	int num;		//contiene l'informazione	
	nodo* succ;		//puntare di nome succ che punta al successivo nodo
};

int main(){
	nodo* testa=new nodo;	//creo un nodo usato come testa della lista
	//scrivo l'informazione nel nodo testa
	testa->num=5;			//PUNTATORE->NOME VARIABILE , si usa per accedere ad un puntatore dentro una struttura
	testa->succ=0;			//per ora punta a 0, perch� non c'� un elemento successivo
	nodo* nuovo=new nodo;		//creazione nodo

	cout<<"Inserisci il numero da inserire nel nodo \n";
	cin>>nuovo->num;	

}
