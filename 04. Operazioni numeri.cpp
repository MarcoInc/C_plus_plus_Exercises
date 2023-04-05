//LIBRERIE
#include <iostream>				//Gestisce stream Input e Output -> fa funzionare il COUT e CIN
#include <string>				//Permette di usare le STRINGHE

using namespace std;

int main(){
	//NUMERI INTERI	-> numeri senza vigola
	
	int intero=5;									
	int intero2=10;		

	int sommaINT=intero+intero2;	//Conviene operare sempre con variabili dello STESSO TIPO
	int sottrazioneINT=intero2-intero;
	int prodottoINT=intero*intero2;
	int divisioneINT=intero2/intero;
	
	int resto=intero%2;				//INTERO MODULO 2 -> Restituisce il resto dalla divisione tra INTERO e 2
	
	cout<<"SOMMA INT : "<<sommaINT<<endl;	
	cout<<"SOTTRAZIONE INT : "<<sottrazioneINT<<endl;
	cout<<"PRODOTTO INT : "<<prodottoINT<<endl;
	cout<<"DIVISIONE INT : "<<divisioneINT<<endl;
	cout<<"RESTO INT : "<<resto<<endl;
	cout<<endl;				//Aggiungo un ulteriore "A CAPO"
			

	short numShort=25;	
	short numShort2=15;	
	
	short sommaSHORT=numShort+numShort2;	//posso operare tra loro solo se i tipi sono dello STESSO TIPO
	short sottrazioneSHORT=numShort2-numShort;
	short prodottoSHORT=numShort*numShort2;
	short divisioneSHORT=numShort2/numShort;
		
	cout<<"SOMMA SHORT : "<<sommaSHORT<<endl;	
	cout<<"SOTTRAZIONE SHORT : "<<sottrazioneSHORT<<endl;
	cout<<"PRODOTTO SHORT : "<<prodottoSHORT<<endl;
	cout<<"DIVISIONE SHORT : "<<divisioneSHORT<<endl;
	cout<<endl;
	
	
	
	//NUMERI CON LA VIRGOLA
	float numFloat=2.5;		//FLOAT->numero con la virgola piccola precisione	
	float numFloat2=2.0;		
	cout<<"SOMMA FLOAT : "<<numFloat+numFloat2<<endl;	//STAMPO A VIDEO DIRETTAMENTE LA SOMMA SENZA USARE ALTRE VARIABILI
	cout<<"SOTTRAZIONE FLOAT : "<<numFloat-numFloat2<<endl;
	cout<<"PRODOTTO FLOAT : "<<numFloat*numFloat2<<endl;
	cout<<"DIVISIONE FLOAT : "<<numFloat/numFloat2<<endl;
	
	//COSA ACCADE SE OPERO CON TIPI DIVERSI
	int sommaIntFloat=intero+numFloat;
	cout<<"SOMMA INT FLOAT "<<sommaIntFloat<<endl;		//PERDO L'INFORMAZIONE, ovvero i numeri con la virgola. COME SE FOSSERO INTERI
	
	return 0;		
		
}
