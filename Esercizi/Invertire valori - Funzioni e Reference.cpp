#include <iostream>
using namespace std;

void swap(int &a,int &b){		//passo i parametri per riferimento, le copie a e b si riferiscono direttamente agli originali
	int tmp=b;			//variabile di supporto
	b=a;			
	a=tmp;
}

int main() {		
	cout<<"Questo programma inverte il valore di due numeri inseriti dall'utente"<<endl<<"Il primo diventera' il secondo e il secondo diventera' il primo \n";
	int primo, secondo;
	cout<<"Inserisci il primo numero \n";
	cin>>primo;
	cout<<"Inserisci il secondo numero \n";
	cin>>secondo;
	
	swap(primo, secondo);					//swap scambia i due valori passando come parametri due interi
	cout<<"Il primo numero adesso e' "<<primo<<endl;
	cout<<"Il secondo numero adesso e' "<<secondo<<endl;
	
	cout<<"Invertiamoli nuovamente \n";
	swap(primo, secondo);					//scambia di nuovo i due valori, portandoli allo stato inziale
	cout<<"Il primo numero adesso e' "<<primo<<endl;
	cout<<"Il secondo numero adesso e' "<<secondo<<endl;
	
	
	return 0;

}			
						

