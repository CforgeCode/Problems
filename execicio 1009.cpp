#include <iostream>
#include <string>
using namespace std;

main(){
	std::string name;
	double salary,sale;
		
	cin>> name>>salary>>sale;
	cout<<fixed;
	cout.precision(2);
	
	cout<<"TOTAL = R$ "<<salary + (sale * 0.15)<<endl;
	return 0;
	
	

}
