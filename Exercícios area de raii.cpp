#include <iostream>
using namespace std;
#define PI 3.14159

main(){
	float R,A;
	cin>>R;
	A = PI*R*R;
	cout<<fixed;
	cout.precision(4);
	cout<<"A="<<A<<endl;
	return 0;	
}
