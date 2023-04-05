#include <iostream>
using namespace std;



int main() {		
	cout<<"Questo programma inverte il valore di due numeri inseriti dall'utente"<<endl<<"Il primo diventera' il secondo e il secondo diventera' il primo \n";
	int primo, secondo;
	cout<<"Inserisci il primo numero \n";
	cin>>primo;
	cout<<"Inserisci il secondo numero \n";
	cin>>secondo;
	
	int tmp=secondo;				//variabile di supporto che conserverà il secondo valore
	secondo=primo;					//il secondo valore assume il valore del primo
	primo=tmp;						//il primo conterrà il valore conservato nella variabile di supporto
	
	cout<<"Il primo numero adesso e' "<<primo<<endl;
	cout<<"Il secondo numero adesso e' "<<secondo<<endl;
	return 0;

}			
						

