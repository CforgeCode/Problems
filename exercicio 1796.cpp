#include <iostream>

using namespace std;

main(){
	int qtd, s = 0, n = 0, nota;
	cin >> qtd;
	
	for (int i = 0; i < qtd; i++){
		cin >> nota;
		if(nota == 0){
			s += 1;
		}else{
			if(nota == 1){
			
			n += 1;
			}
		}
	}
	if(s > n){
		cout<< "Y"<<endl;
	}else{
		cout<< "N"<<endl;
	}
	
}
