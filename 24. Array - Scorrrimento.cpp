#include <iostream>

using namespace std;
int main() {

	int arrayInt[5];		//dichiaro un array di 5 int
	arrayInt[0]=2;			//assegno 2 alla prima posizione		[2] [ ] [ ] [ ] [ ] 
	arrayInt[1]=10;			//assegno 10 alla seconda posizione		[2] [10] [ ] [ ] [ ] 
	arrayInt[2]=5;			//assegno 5 alla terza posizione		[2] [10] [5] [ ] [ ] 
	arrayInt[3]=3;			//assegno 3 alla quarta posizione		[2] [10] [5] [3] [ ] 
	arrayInt[4]=7;			//assegno 7 alla quinta posizione		[2] [10] [5] [3] [7]
	cout<<"arrayInt \n";
	for(int i=0; i<5 ; i++){		//SCORRO L'ARRAY. L'indice parte da 0 fino alla dimensione MASSIMA
		cout<<arrayInt[i]<<" ";		//SELEZIONO l'i-esimo elemento e lo stampo seguito da uno spazio
	}
	cout<<endl<<endl;			//due volte a capo
	
		
	float arrayFloat[4]={5.2 , 3.1 , 1.0 , 2.0};		//dichiaro un array da 4 float e inserisco i valori
	//[5.2] [3.1] [1.0] [2.0]
	cout<<"arrayFloat PRIMA \n";
	for(int i=0; i<4 ; i++){
		cout<<arrayFloat[i]<<" ";
	}
	cout<<endl;			//un A CAPO
	arrayFloat[2]=1.23;					//modifico l'elemento in posizione 2->terzo elemento
	cout<<"arrayFloat DOPO \n";
	//[5.2] [3.1] [1.23] [2.0]
	
	
	for(int i=0; i<4 ; i++){
		cout<<arrayFloat[i]<<" ";
	}
	cout<<endl;
	
	
	int arrayInt2[]={3 , 4 , 5};					//ma va riempito in qualche modo. La dimensione sarà di 3 elementi
				//	[3] [4] [5]
	cout<<"arrayInt2 \n";
	for(int i=0; i<3 ; i++){
		cout<<arrayInt2[i]<<" ";
	}
	cout<<endl<<endl;
				
				
	string arrayString[3]={"Cane" , "Gatto" , "Pappagallo"};			//Array di dimensione 3 con 3 stringhe
						//[Cane]  [Gatto]  [Pappagallo]
	cout<<"arrayString \n";
	for(int i=0; i<3 ; i++){
		cout<<arrayString[i]<<" ";
	}
	cout<<endl<<endl;
			
					
	char arrayChar[5]={'C', 'A' , ' ' , 'N' , 'E'};				//Array di 5 char con 5 caratteri			
	cout<<"arrayChar \n";
	for(int i=0; i<5 ; i++){
		cout<<arrayChar[i]<<" ";
	}
	cout<<endl<<endl;		
	return 0;
}			
						

