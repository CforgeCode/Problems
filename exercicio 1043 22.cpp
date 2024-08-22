#include <iostream>

using namespace std;

main(){
	float A,B,C;
	cin>>A>>B>>C;
	cout<<fixed;
	cout.precision(1);
	
	
	if (A+B> C && A+C> B && C+B> A or A==B==C ){
		cout<<"Perimetro = "<< A+B+C<<endl;
		}else{
			cout<<"Area = "<< ((A+B)*C)/2<<endl;
		}
return 0;
}
