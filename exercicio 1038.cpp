#include <iostream>

using namespace std;

main(){
	int codigo,qtd;
	
	cin>> codigo>>qtd;
	cout<<fixed;
	cout.precision(2);
	
	if (codigo == 1){
		cout<<"Total: R$ "<< qtd* 4.0<<endl;
	}
	
	if (codigo == 2){
		cout<<"Total: R$ "<< qtd* 4.5<<endl;
	}
	
	if (codigo == 3){
		cout<<"Total: R$ "<< qtd* 5.0<<endl;
	}
	
	if (codigo == 4){
		cout<<"Total: R$ "<< qtd* 2.0<<endl;
	}
	
	if (codigo == 5){
		cout<<"Total: R$ "<< qtd* 1.5<<endl;
	}
}


