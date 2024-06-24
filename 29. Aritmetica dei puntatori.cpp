#include <iostream>

using namespace std;

int main(){

	int vettore[5]={3,5,2,7,8};
	//Un vettore non è altro che un puntatatore ad altri valori
	cout<<vettore<<endl; //stampa l'indirizzo del primo elemento;

	int *ptr=vettore; //punta all'indirizzo del primo elemento
	
	for(int i=0;i<5;i++){
		cout<<*ptr<<endl; //stampo l'elemento puntato da ptr
		ptr++;//incremento il puntatore per l'elemento successivo
	}

	int *ptr2=&vettore[4]; //punta all'indirizzo dell'ultimo elemento

	for(int i=0;i<5;i++){
		cout<<*ptr2<<endl; //stampo l'elemento puntato da ptr2
		ptr2--; //decremento il puntatotore per l'elemento precedente
	}
	
	return 0;

}

	