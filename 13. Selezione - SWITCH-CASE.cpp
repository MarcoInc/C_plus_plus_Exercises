//LIBRERIE
#include <iostream>				//Gestisce stream Input e Output -> fa funzionare il COUT e CIN
#include <string>				//Permette di usare le STRINGHE

using namespace std;

int main(){
	
	int zampe;
	string animale;
	cout<<"Dimmi il numero di zampe e ti dirò l'animale corrispondente'"<<endl;
	cout<<"SCEGLI TRA: 2 , 4 , 6 e 8"<<endl;
	cin>>zampe;
	
	switch (zampe){
		case 2:
			animale="Pollo, Passero, Canarino";
			break;
			
		case 4:
			animale="Cane, Gatto, Elefante";
			break;
			
		case 6:
			animale="Formica, Grillo, Ape";
			break;
			
		case 8:
			animale="Ragno, Granchio, Polpo";	
			break;
		default:
			animale="Nessun animale trovato";	
	}
	
	cout<<animale<<" con "<<zampe<<" zampe \n";
	
	return 0;
		
		
}




