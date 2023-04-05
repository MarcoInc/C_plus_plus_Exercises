#include <iostream>
#include <fstream> //permette l'uso dei file input.txt e output.txt

using namespace std;

int main(){
    ofstream out;           	//creo un flusso stream di nome out
    out.open("2. output.txt"); //destinazione output
    string nome, cognome;
    int eta;
    
    for (int rigo=0;rigo<3;rigo++){
    	cout<<"Persona "<<rigo+1<<endl;
    	cout<<"Inserisci il nome : \n";
    	cin>>nome;
    	cout<<"Inserisci il cognome : \n";
    	cin>>cognome;
    	cout<<"Inserisci il eta' : \n";
    	cin>>eta;
    	
		out<<nome<<" "<<cognome<<" "<<eta;            //scriviamo nel file di output (come cout)
		out<<endl;                             		  //vado a capo ad ogni rigo
		
        cout<<nome<<" "<<cognome<<" "<<eta;          //stampo a video quello che mette in output
    	cout<<endl<<endl;
        
    }
    out.close();						//chiudo flusso out
    return 0;
}
