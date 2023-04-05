#include <iostream>

using namespace std;
int main() {
	
	int array[10];
	int pesoInt=sizeof(int);
	int pesoArray=sizeof(array);
	cout<<"Ogni int pesa "<<pesoInt<<endl;
	cout<<"L'intero array di int pesa "<<pesoArray<<endl;
	
	int dimensioneArray=pesoArray/pesoInt;
	
	cout<<"L'array ha "<<dimensioneArray<<" elementi \n";
	return 0;
}			
						

