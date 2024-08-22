#include <iostream>

using namespace std;

main(){
	int n, fat;
	cin>>n;
	fat = n;
	while (n > 1 ){
		fat *=  (n-1);
		n -= 1;	
	}
	
	cout<< fat<<endl;
}

//AS DUAS SOLUÇÕES FUNCIONAM

/*
int main(){
	int n, fat;
	cin>> n;
	fat = 1;
	
	for(int i = 1;  i <= n; i++){
		fat *= i;	
	}
	cout<< fat<<endl;
	return 0;
}
\*


