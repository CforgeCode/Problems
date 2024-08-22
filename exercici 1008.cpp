#include <iostream>
using namespace std;

main(){
	int number,workedH;
	float salaryH,SALARY;
	
	cin>> number>>workedH>> salaryH;
	SALARY = salaryH * workedH;
	cout<<fixed;
	cout.precision(2);
	
	cout<<"NUMBER = "<<number<<endl;
	cout<<"SALARY = U$ "<<SALARY<<endl;
	
	return 0;
	
	
	
	
}
