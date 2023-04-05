#include <iostream>
using namespace std;



int main() {		
	cout<<"RICERCA MASSIMO E MINIMO IN UN ARRAY \n\n";
	int array[10]={9, 45 ,50, 200, 10000 , 0 , 2 , 74 , 12 , 92};
	int max=array[0];
	int min=array[0];
	
	for(int i=0; i<10 ; i++){
		if(min>array[i])
			min=array[i];
	}
	
	for(int i=0; i<10 ; i++){
		if(max<array[i])
			max=array[i];
	}
	cout<<"Minimo : "<<min<<endl;
	cout<<"Massimo : "<<max<<endl;


	return 0;

}			
						

