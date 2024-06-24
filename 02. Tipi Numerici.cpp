//LIBRERIE
#include <iostream>				//Gestisce stream Input e Output -> fa funzionare il COUT e CIN

using namespace std;

int main(){
	//NUMERI INTERI	-> numeri senza vigola
	
	int intero=5;					//INTERO che può assumere grandi valori -> 4 byte
	
	short numShort=12;				//INTERO che non può assumere grandi valori -> 2byte
	
	cout<<"INTERI : "<<intero<<" , "<<numShort<<endl;
	cout<<"int ->"<<sizeof(int)<<" byte"<<endl;
	cout<<"short ->"<<sizeof(short)<<" byte"<<endl;
	
	//NUMERI CON LA VIRGOLA
	float numFloat=1.259874;		//FLOAT->numero con la virgola piccola precisione -> 2 byte				
	cout<<"FLOAT : "<<numFloat<<endl;
	cout<<"float ->"<<sizeof(short)<<" byte"<<endl;

									
	double numDouble=3.141232;		//DOUBLE->numero con la virgola grande precisione -> 8 byte
	cout<<"DOUBLE : "<<numDouble<<endl;
	cout<<"double ->"<<sizeof(double)<<" byte"<<endl;

	bool sole=true;		//bool -> true (1) o false (0)
	cout<<"bool : "<<sole<<endl;
	bool unicorni=false;	
	cout<<"bool : "<<unicorni<<endl;
	cout<<"bool ->"<<sizeof(bool)<<" byte"<<endl;
	
	
	return 0;		
		
}
