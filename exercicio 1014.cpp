#include <iostream>
using namespace std;

main(){
	int X;
	float Y;
	
	cin>> X>>Y;	
	
	cout<<fixed;
	cout.precision(3);
	
	cout<<X/Y<<" km/l"<<endl;
	
	return 0;
	
}
