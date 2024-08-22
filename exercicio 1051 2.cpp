#include <iostream>
#include <cmath>
using namespace std;

main(){
	float renda, imposto = 0;
	cin>>renda;
	cout<<fixed;
	cout.precision(2);
	
	if (renda<2000){
		cout<<"Isento"<<endl;
	} else {
		if (renda > 4500){
			imposto += ((renda - 4500) * 0.28);
			renda = 4500;
		}
		if (renda > 3000) {
			imposto += ((renda - 3000) * 0.18);
			renda = 3000;
		}
		if (renda > 2000) {
			imposto += ((renda - 2000) * 0.08);
		}
		cout<<"R$ "<<imposto<<endl;
	}
	return 0;
}
