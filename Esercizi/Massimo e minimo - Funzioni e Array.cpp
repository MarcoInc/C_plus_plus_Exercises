#include <iostream>
using namespace std;

int min(int a[], int dim){
	int minimo=a[0];
	for(int i=0; i<dim ; i++){
		if(minimo>a[i])
			minimo=a[i];
	}
	return minimo;
	
}

int max(int a[], int dim){
	int massimo=a[0];
	for(int i=0; i<dim ; i++){
		if(massimo<a[i])
			massimo=a[i];
	}
	return massimo;
}

int main() {		
	cout<<"RICERCA MASSIMO E MINIMO IN UN ARRAY TRAMITE FUNZIONI\n\n";
	int array[10]={9, 45 ,50, 200, 10000 , 0 , 2 , 74 , 12 , 92};	
	
	cout<<"Minimo : "<<min(array,10)<<endl;
	cout<<"Massimo : "<<max(array,10)<<endl;


	return 0;

}			
						

