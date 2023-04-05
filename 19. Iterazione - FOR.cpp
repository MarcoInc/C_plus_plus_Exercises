#include <iostream>

using namespace std;
int main() {
	cout<<"Il programma conta da 0 ad un valore impostato dall'utente, usando il CICLO FOR \n";
	int massimo;
	cout<<"Fino a dove vuoi contare? \n";
	cin>>massimo;
	
	
	//Come while ma più semplice da usare. for(PARTENZA ; FINE ; INCREMENTO)
	for(int i=0; i<=massimo; i++){		//usando una variabile di supporto 'i', incremento ad ogni ciclo fino a quando è minore di massimo
		cout<<i<<endl;
	}
	
	return 0;
}			
						

