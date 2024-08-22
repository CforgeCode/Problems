#include <iostream>

using namespace std;

main(){
	int a,auxi,  b, soma = 0;
	cin >> a >> b;
	
	if(b > a){
		auxi = a;
		a = b;
		b = auxi;
	}
	if (b % 2 == 0) {
	    b ++;
	}
	soma = b;
	while(soma < a) {
		soma += 2;
	} 
	cout<<soma<<endl;
	return 0;
}
