#include <iostream>
using namespace std;

main(){

	double A,B,C, MEDIA;
	cin >> A>>B>>C;
	MEDIA = ((A*2)+(B*3)+(C*5))/10;
	cout<<fixed;
	cout.precision(1);
	cout<<"MEDIA = "<<MEDIA<<endl;
	return 0;

}
