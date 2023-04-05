//LIBRERIE
#include <iostream>				//Gestisce stream Input e Output -> fa funzionare il COUT e CIN

using namespace std;

int main(){
	//NUMERI INTERI	-> numeri senza vigola
	
	int intero=5;					//INTERO che può assumere grandi valori
	
	short numShort=12;				//INTERO che non può assumere grandi valori
	
	cout<<"INTERI : "<<intero<<" , "<<numShort<<endl;
	
	
	
	//NUMERI CON LA VIRGOLA
	float numFloat=1.259874;		//FLOAT->numero con la virgola piccola precisione				
	cout<<"FLOAT : "<<numFloat<<endl;
									
	double numDouble=3.141232;		//DOUBLE->numero con la virgola grande precisione
	cout<<"DOUBLE : "<<numDouble<<endl;

	
	return 0;		
		
}
