#include <iostream>

using namespace std;
int main() {
	cout<<"Per fare un panino e' necessario avere i seguenti ingredienti BASE : IL PANE e IL FORMAGGIO"<<endl;
	cout<<"Gli ingredienti PROSCIUTTO , LATTUGA e SALSA sono OPZIONALI ma rendono il panino PIU' BUONO"<<endl;
	bool prosciutto, pane, formaggio, lattuga, salsa;
	cout<<"Scrivi 1 se hai i condimento , altrimenti 0 \n";
	
	cout<<"Pane \n";
	cin>>pane;
	
	cout<<"Formaggio \n";
	cin>>formaggio;
	
	cout<<"Prosciutto \n";
	cin>>prosciutto;
		
	cout<<"Lattuga \n";
	cin>>lattuga;
	
	cout<<"Salsa \n";
	cin>>salsa;
		
		//pane si  E   formaggio si
	if(pane==true && formaggio==true){		//verifico che siano presenti entrambi i ingredienti base
		cout<<"La base del panino e' pronta \n";
			
			//prosciutto si O 	lattuga si   O   salsa si
		if(prosciutto==true || lattuga==true || salsa==true){		//verifico se c'è almeno un ingrediente opzionale
			cout<<"Hai messo almeno un ingrediente opzionale , quindi il panino e' più buono \n";
		}
		else{
			cout<<"Non hai messo nessun ingrediente opzionale , il panino e' dietetico"<<endl;
		}
		
	}
				//pane si E formaggio no	 O	 pane no     E  formaggio si	O	 pane no     E   formaggio no
	else if((pane==true && formaggio==false) || (pane==false && formaggio==true) || (pane==false && formaggio==false)){	//vedo se manca almeno un ingrediente base o entrambi
		cout<<"Manca almeno un ingrediente base tra formaggio e pane \n";	
		
	}
	

	
	return 0;				
						

}
