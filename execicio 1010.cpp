#include <iostream>
using namespace std;

main(){
	int code1,units1,code2,units2;
	float price1,price2;
	
	cin>>code1>>units1>>price1>>code2>>units2>>price2;
	
	cout<<fixed;
	cout.precision(2);
	
	cout<<"VALOR A PAGAR = R$ "<<((units1*price1)+(units2*price2))<<endl;
	return 0;
	
}
