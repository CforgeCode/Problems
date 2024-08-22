#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
	int a,b,s,maior;
	
	cin>>a>>b>>s;
	maior = ((a+b+abs(a-b))/2);
	cout<<((maior+s+abs(maior-s))/2)<<" eh o maior"<<endl;

	return 0;
	
	
	
}
