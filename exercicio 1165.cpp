#include <iostream>

using namespace std;

main(){
	int n, num, test = 0;
	cin>> n;
	
	for(int i = 0; i < n; i++){
		cin >> num;
		
		if (num == 2){
		cout<< num << " eh primo"<<endl;
		}else{
			test = 0;
			for(int j=2; j <= (num /2); j++){
				
				if(num % j == 0){
					test += 1;
				}
			}
			if(test != 0){	
			cout<< num << " nao eh primo"<<endl;
			
			}else{
				if(test == 0){
				cout<< num << " eh primo"<<endl;
				}
			}	
		}
	}return 0;
}
