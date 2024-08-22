#include <iostream>

using namespace std;

main(){
	double n, valor=0;
	int i = 1, divisor=0;
	
	while(i <=6){
	
		cin>>n;
		if (n>0){
			valor += n;
			divisor += 1;
			i++;
		}else{
			i++;
		}
	
}
cout<<fixed;
cout.precision(1);

cout<< divisor << " valores positivos"<<endl;
cout<< valor / divisor<<endl;

return 0;
}
