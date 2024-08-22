#include <iostream>

using namespace std;

main(){
	int a,b,auxi,soma = 0;
	cin>> a >> b;
	
	if(b > a){
		auxi = a;
		a = b;
		b = auxi;
	}
	for(int i = b+1; i < a; i ++){
		if (i % 2 != 0){
			soma += i;
					
		}
	}
	cout<<soma<<endl;
	return 0;
}
