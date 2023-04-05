#include <iostream>
#include <fstream> //permette l'uso dei file input.txt e output.txt

using namespace std;

//funzione che trova il massimo tra le coppie due a due
int max(int i, int j){
    if(i>j) return i;
    if(i<=j) return j;
}
/*	- è il più piccolo, + è il più grande (n non viene considerato)
6 1 5 9 6 3 2 
n -	+ + - +
avremo quindi
5 9 3
*/

int main(){
    ifstream in;            //creo un flusso stream in
    ofstream out;           //creo un flusso stream out
    
    in.open("1.input.txt");   //stream in che utilizzeremo come sorgente input
    out.open("1.output.txt"); //strean out che utilizzeremo come destinazione output
    
    //so che il file contiene 5 righe di numeri, quindi 5 task
    
    for (int task=0;task<5;task++){
		/*	Il primo numero della sequenza ci dice quandi numeri vengono dopo da analizzare
  		  6 1 5 9 6 3 2 
   		  ^
   		*/	//in questo caso ci stanno 6 numeri

        int n;   
        in >> n;  //mettiamo il primo numero, la dimensione dell'intero task/rigo

        int s[n];   //creo un nuovo array lungo n, ovvero la quantita'  che vogliamo analizzare

        for(int i=0;i<n;i++){  //inserisco in questo nuovo array gli elementi del task che rimangono

            in>>s[i];   //scorre dal secondo in poi, il primo lo abbiamo già letto prima

        }
        
        for(int i=0;i<n;i+=2){	//ad ogni for salto di due perchè confronto a coppia
		//faccio confronti tra un numero e quello che viene dopo
            out<<max(s[i],s[i+1])<<" ";            //scriviamo nel file di output (come cout)
            cout<<max(s[i],s[i+1])<<" ";            //stampo a video quello che mette in output
        }
         out<<endl;                             //vado a capo ad ogni task nel file
         cout<<endl;							//vado a capo ad ongi task nella stampa a video
    }
    
    in.close();                                 //chiudo gli stream
    out.close();
    return 0;
}
