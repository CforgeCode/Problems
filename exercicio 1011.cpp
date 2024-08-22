#include <iostream>
using namespace std;

#define PI 3.14159

main(){
	double R;
	
	cin>>R;
	
	cout<<fixed;
	cout.precision(3);
	
	cout<<"VOLUME = "<<(4/3.0)* PI * (R*R*R)<<endl;
	return 0;
	
	
}
