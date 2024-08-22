#include <iostream>

using namespace std;

main(){
	int N;
	
	cin>> N;
	cout<<N/3600<<":"<< (N-((N/3600)*3600))/60 <<":"<< (N-((N/60)*60))<<endl;
	
		
	return 0;
	
}
