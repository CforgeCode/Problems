#include <iostream>
#include <cmath>
using namespace std;


main(){
	double x1,y1,x2,y2;
	
	cin>> x1>>y1>>x2>>y2;
	
	cout<<fixed;
	cout.precision(4);
	
	cout<<sqrt(((x2*x2)-2*x1*x2+(x1*x1))+((y2*y2)-2*y1*y2+(y1*y1)));
	
	return 0;
	
	
}
