#include <iostream>
#include <cmath>
using namespace std;

main(){
	double A,B,C, delta;
	cout<<fixed;
	cout.precision(5);
	
	cin>> A>>B>>C;
	
	
	delta = ((B*B)-4*A*C);
	 
	if (A != 0&& delta>0 ){
	cout<<"R1 = "<<	((-B)+ sqrt(delta))/(2*A)<<endl;
	cout<<"R2 = "<<	((-B)- sqrt(delta))/(2*A)<<endl;	
		
	}else{cout<<"Impossivel calcular"<<endl;
	}
	return 0;
}
