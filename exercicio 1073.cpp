#include <iostream>

using namespace std;

main(){
	int n, i=2;
	cin>> n;
	
	while (i<n){
		cout<< i << "^2"<<" = " << i*i<< endl;
		i += 2; 
		
	}if(n % 2 == 0){
		cout<< n << "^2"<<" = " << n*n<< endl;
	}
	return 0;
}
