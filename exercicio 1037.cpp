#include <iostream>

using namespace std;

main(){
	float a;
	cin>> a;
	
	if (a >= 0 && a<=25.00){
		cout<<"Intervalo [0,25]"<<endl;
	}
	if (a > 25 && a<=50.00){
		cout<<"Intervalo (25,50]"<<endl;
	}
	
	if (a > 50 && a<=75.00){
		cout<<"Intervalo (50,75]"<<endl;
	}
	if (a > 75 && a<=100.00){
		cout<<"Intervalo (75,100]"<<endl;
	}
	if (a<0 or a >100){
		cout<<"Fora de intervalo"<<endl;
	}
	
	return 0;
}
