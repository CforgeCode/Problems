#include <iostream>
#define PI 3.14159

using namespace std;

main(){
	double A,B,C;
	
	cin>>A>>B>>C;
	
	cout<<fixed;
	cout.precision(3);
	
	cout<<"TRIANGULO = "<<(A*C)/2<<endl;
	cout<<"CIRCULO = "<<PI*(C*C)<<endl;
	cout<<"TRAPEZIO = "<<((A+B)*C)/2<<endl;
	cout<<"QUADRADO = "<<B*B<<endl;
	cout<<"RETANGULO = "<<A*B<<endl;
	
	return 0;
	
	
}
