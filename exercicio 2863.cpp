#include <iostream>

using namespace std;

main(){
	int t;
	float tempo, mtempo;
	
	while(cin>> t){
		mtempo = 0;
	
		
		for(int i = 0; i < t; i++){
			cin>> tempo;
			if (mtempo == 0){
				mtempo = tempo;
				
			}else{
				if(mtempo > tempo){
					mtempo = tempo;
				}
			}
		}
		cout<< mtempo<<endl;
		
	}		
}
