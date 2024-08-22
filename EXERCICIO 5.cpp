#include <iostream>
using namespace std;

main(){
	float A,B,MEDIA;
	cin>>A>>B;
	MEDIA = ((A *3.5) +(B*7.5) )/11;
	cout<<fixed;
	cout.precision(5);
	cout<<"PROD = "<<MEDIA<<endl;
	return 0;
}
