#include <iostream>

using namespace std;

main(){
	int a,b, cont;
	cin>> a>>b;
	
	while (a>0 && b>0){
		
		if (a>b){cont = b;
			while (b< a){
				cout << b<<" ";
				b++;
				cont += b;
				
				}	cout<<a<<" ";
	}
		if (b>a){cont =a;
			while (a< b){
				cout << a<<" ";
				a++;
				cont += a;
	}cout<<b<<" ";	
	}
	cout<<"Sum="<<cont<<endl;
	cin>> a>>b;
}}
