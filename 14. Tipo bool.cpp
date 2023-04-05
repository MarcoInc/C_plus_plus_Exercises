#include <iostream>

using namespace std;
int main() {
	//TIPO BOOL -> Assume solo due valori, VERO->true / 1 o FALSO-false / 0
	bool sole=false;
	bool unicorni=false;
	bool babbonatale=0;   //0 è uguale a false
	bool luna=1;		   //1 è uguale a true
	
	if(sole==false)			//verifico se quel che c'è tra parentesi è vero o no
		cout<<"Il sole esiste"<<endl;
		
	if(unicorni!=true)		//chiedo se è NOT TRUE, ovvero NON VERO->FALSO
		cout<<"Gli unicorni non esistono"<<endl;
		
	if(babbonatale!=1)			//chiedo se è NOT 1, ovvero NON VERO->FALSO
		cout<<"Babbo natale non esiste"<<endl;
		
	if(luna)     				//se non metto nulla, chiedo se quello che ci sta dentro le parentesi è vero
		cout<<"La luna esiste"<<endl;

}
