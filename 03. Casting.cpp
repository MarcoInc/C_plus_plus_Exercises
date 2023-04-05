//LIBRERIE
#include <iostream>				//Gestisce stream Input e Output -> fa funzionare il COUT e CIN

using namespace std;

int main(){
	//CASTING -> Conversione da un tipo ad un altro compatibile
	
	int intero=5;
	float virgola=3.1412315;
	cout<<"Intero : "<<intero<<endl;
	cout<<"Float : "<<virgola<<endl;
	
	float intToFloat=(float)(intero);				//casting da int a float
	int floatToInt=(int)(virgola);					//casting da float ad int
	
	cout<<"INTERO convertito in FLOAT : "<<intToFloat<<endl;		//non perdiamo informazione, manteniamo la parte intera
	cout<<"FLOAT convertito in INT : "<<floatToInt<<endl;		//perdiamo informazione ovvero la parte dopo la virgola
	
	return 0;
}
