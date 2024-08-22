#include <iostream>

using namespace std;

main(){
	int t,pa,pb;
	float g1,g2;
	
	cin>> t>>pa>>pb>>g1>>g2;

	
	for (int i= 0; 	i < t ; i++){
		
		int u = 1;
		
		while(pa < pb){
			
			pa += static_cast<int>(pa * (g1/100));
			cout<<pa<<endl;
			pb += static_cast<int>(pb * (g2/100));
			cout<<pb<<endl;
			u ++;
			cout<<"u :" << u <<endl;
		
			
		}cout<< u <<" ANOS"<<endl;
		
	}
	
}
