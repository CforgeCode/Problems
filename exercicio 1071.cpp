#include <iostream>

using namespace std;

main(){
	int a,b,fixo,auxi,soma;
	cin>> a>>b;
	
	if(a == b){
		cout<<"0"<<endl;
		return 0;}
		
	if(b>a){
		auxi= a;
		a=b;
		b=auxi;
	}
	fixo = b;
	
	if (b%2 != 0){
		while(a>b){
			if (b%2 != 0){
				soma += b;	
				}
				b += 1;
	}	cout<<soma - fixo<<endl;
			
		}else{
			
			
		}
		
	}
	while(a>b){
		
		if (b%2 != 0){
			soma += b;	
		}
		b += 1;
		}
		
	if (fixo % 2 != 0){
	cout<<soma - fixo<<endl;
	}else{
		cout<<soma<<endl;
	}
return 0;
}
