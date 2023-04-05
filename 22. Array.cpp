#include <iostream>

using namespace std;
int main() {
	/*
	Un ARRAY e' una raccolta di dati dello stesso tipo. Come se fosse una tabella
	Questo array è composto da 5 elementi, quindi diremo che ha DIMENSIONE pari a 5, ma il primo elemento parte sempre dalla posizione 0
					[2]		 [10] 		[5] 		[3]		  [7]
	posizione---->	 0		  1          2           3         4
	il 2 ed primo elemento sta alla posizione 0, 
	il 10 sta alla posizione 1, 
	il 5 sta alla posizione 2, 
	il 3 sta alla posizione 3,
	il 7 ed ultimo elemento sta alla posizione 4
	*/
	
	//La dimensione dell'array è pari al numero che sta dentro le parentesi
	int arrayInt[5];		//dichiaro un array di 5 int
	
	//Ogni elemento è indicato da una posizione. Il primo elemento sta in posizione 0, il secondo in posizione 2...l'ultimo sta a dimensione-1
	
	arrayInt[0]=2;			//assegno 2 alla prima posizione		[2] [ ] [ ] [ ] [ ] 
	arrayInt[1]=10;			//assegno 10 alla seconda posizione		[2] [10] [ ] [ ] [ ] 
	arrayInt[2]=5;			//assegno 5 alla terza posizione		[2] [10] [5] [ ] [ ] 
	arrayInt[3]=3;			//assegno 3 alla quarta posizione		[2] [10] [5] [3] [ ] 
	arrayInt[4]=7;			//assegno 7 alla quinta posizione		[2] [10] [5] [3] [7]
	
	
	
	float arrayFloat[4]={5.2 , 3.1 , 1.0 , 2.0};		//dichiaro un array da 4 float e inserisco i valori
	//[5.2] [3.1] [1.0] [2.0]
	arrayFloat[2]=1.23;						//modifichiamo il terzo elemento 
	//[5.2] [3.1] [1.23] [2.0]
	
	
	
	
	//Non perforza dobbiamo specificare la dimensione
	int arrayInt2[]={3 , 4 , 5};					//ma va riempito in qualche modo. La dimensione sarà di 3 elementi
				//	[3] [4] [5]
				
	string arrayString[3]={"Cane" , "Gatto" , "Pappagallo"};			//Array di dimensione 3 con 3 stringhe
						//[Cane]  [Gatto]  [Pappagallo]
						
	char arrayChar[5]={'C', 'A' , 'N' , 'E' , ' '};				//Array di 5 char con 5 caratteri					
	return 0;
}			
						

