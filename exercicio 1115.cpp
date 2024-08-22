#include <iostream>

using namespace std;

main(){
	int n1,n2;
	
	
	while (true){
		cin>>n1>>n2;
		if (n1 ==0 || n2 == 0){
				return false;
		}else{
			if (n1 > 0 && n2 > 0){
				cout<<"primeiro"<<endl;
				
			}else{
				if (n1 > 0 && n2 < 0){
					cout<<"quarto"<<endl;
				}else{
					if (n1 < 0 && n2 > 0){
						cout<<"segundo"<<endl;
						
					}else{
						cout<<"terceiro"<<endl;
						}
		}
		}}}		
return 0;
}
