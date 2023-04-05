//LIBRERIE
#include <iostream>				//Gestisce stream Input e Output -> fa funzionare il COUT e CIN
#include <string>				//Permette di usare le STRINGHE

#define DUE 2
using namespace std;

int main(){
				//L'ordine di scrittura definisce l'ordine di esecuzione
	int numero=2;	//VALE 2
	cout<<"VALORE INZIALE : "<<numero<<endl;
	
	cout<<"INSERISCI UN VALORE DA SOVRASCRIVERE A 2"<<endl;
	cin>>numero;		//SOVVRASCRIVO un numero che scelgo io
	cout<<"SOVVRASCRITTO CON : "<<numero<<endl;
	
	
	numero=numero+10;//INCREMENTO di 10
	cout<<"INCREMENTATO DI 10 : "<<numero<<endl;
	
	numero+=10;				////INCREMENTO di 10->uguale a numero=numero+10
	cout<<"INCREMENTATO DI 10 CON numero+=10 : "<<numero<<endl;
	
	numero++;	//INCREMENTO di 1-> uguale a numero=numero+1
	cout<<"INCREMENTATO DI 1 CON numero++ : "<<numero<<endl;
	
	
	numero=numero-3;				////DECREMENTO di 3
	cout<<"DECREMENTO DI 3: "<<numero<<endl;
	
	numero-=3;				//DECREMENTO di 3->uguale a numero=numero-3
	cout<<"DECREMENTATO DI 3 CON numero-=3 : "<<numero<<endl;
	
	numero--;	//DECREMENTO di 1-> uguale a numero=numero-1
	cout<<"DECREMENTO DI 1 CON numero--: "<<numero<<endl;
	
	
	numero=numero*2;				////MOLRIPLICATO PER 2
	cout<<"MOLTIPLICATO PER 2: "<<numero<<endl;
	
	numero*=2;				////MOLRIPLICATO PER 2 -> uguale a numero=numero*2
	cout<<"MOLTIPLICATO PER 2 CON *= : "<<numero<<endl;
	
	numero=numero+DUE;		//INCREMENTO di DUE->definito in alto
	cout<<"INCREMENTATO DEL VALORE DELLA '#define DUE 2' : "<<numero<<endl;
	

	return 0;
}




