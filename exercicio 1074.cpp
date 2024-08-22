#include <iostream>

using namespace std;

main(){
	int n,num;
	cin>>n;
	for(int i = 0; i<n; i++){
		cin >> num;
		if(num == 0){
			cout<<"NULL"<<endl;
		}else{
			if(num % 2 == 0){
				cout<<"EVEN";
				if (num > 0){
					cout<<" POSITIVE"<<endl;
				}else{
					cout<<" NEGATIVE"<<endl;
				}
			}else{
				cout<<"ODD";
				if (num > 0){
					cout<<" POSITIVE"<<endl;
				}else{
					cout<<" NEGATIVE"<<endl;
				}
			}
		
		}
  	}	
return 0;
}
