#include <iostream>
#include <cmath>
using namespace std;
main(){
	double a,b,c;
	
	cin >> a>> b>>c;
	cout<<fixed;
	cout.precision(5);
	
	if ((b*b) - 4*a*c > 0 && a!=0){
		
		cout<<"R1 = "<<(-b+(sqrt(((b*b) - 4*a*c))))/(2*a)<<endl;
		
		cout<<"R2 = "<<(-b-(sqrt(((b*b) - 4*a*c))))/(2*a)<<endl;
		}	
	else{
		cout<<"Impossivel calcular"<<endl;
	}
	
	return 0;
}
