#include <iostream>

using namespace std;

main(){
	float A,B,C;
	cin>> A>>B>>C;
	
	cout<<fixed;
	cout.precision(1);
	
	
	
	if (A==B&&B==C){
			cout<<"Perimetro = "<< A+B+C<<endl;
	}
	
	if (A>B&&B>C){
		if ((B+C)>A){
			cout<<"Perimetro = "<< A+B+C<<endl;
		}else{
			cout<<"Area = "<< ((A+B)*C)/2<<endl;
		}
	}
	if (A>C&&C>B){
		if ((B+C)>A){
			cout<<"Perimetro = "<< A+B+C<<endl;
		}else{
			cout<<"Area = "<< ((A+B)*C)/2<<endl;
		}
	}
		
	if (B>A&&A>C){
		if ((A+C)>B){
			cout<<"Perimetro = "<< A+B+C<<endl;
		}else{
			cout<<"Area = "<< ((A+B)*C)/2<<endl;
		}
		}
	if (B>C&&C>A){
		if ((A+C)>B){
			cout<<"Perimetro = "<< A+B+C<<endl;
		}else{
			cout<<"Area = "<< ((A+B)*C)/2<<endl;
		}
		}
	
	if (C>A&&A>B){
		if ((A+B)>C){
			cout<<"Perimetro = "<< A+B+C<<endl;
		}else{
			cout<<"Area = "<< ((A+B)*C)/2<<endl;
		}
		}			
	if (C>B&&B>A){
		if ((A+B)>C){
			cout<<"Perimetro = "<< A+B+C<<endl;
		}else{
			cout<<"Area = "<< ((A+B)*C)/2<<endl;
		}
		}			

}
