#include <iostream>

using namespace std;

main(){
	double a,b;
	
	while (true){
		
		cin>> a >> b;
		if(a == b){
			return false;
		}
		if (a > b){
			cout<<"Decrescente"<<endl;
		}else{
			cout<<"Crescente"<<endl;
		}
		
	
	}
return 0;

}
