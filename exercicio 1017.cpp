#include <iostream>

using namespace std;

main(){
	int hora, velocidade;
	
	cin>> hora>> velocidade;
	
	cout<<fixed;
	cout.precision(3);
	
	cout<< (hora*velocidade)/12.00<<endl;
	
	return 0;
	
}
