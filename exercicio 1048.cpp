#include <iostream>

using namespace std;

main(){
	float s;
	cin>> s;
	cout<<fixed;
	cout.precision(2);
	
	if (s>0 && s<= 400){
	
		cout<<"Novo salario: "<<s+(s*0.15)<<endl;
		cout<<"Reajuste ganho: "<<(s+(s*0.15))-s<<endl;
		cout<<"Em percentual: 15 %"<<endl;
}
	if (s>400 && s<= 800){
	
		cout<<"Novo salario: "<<s+(s*0.12)<<endl;
		cout<<"Reajuste ganho: "<<(s+(s*0.12))-s<<endl;
		cout<<"Em percentual: 12 %"<<endl;
}
	if (s>800 && s<= 1200){
	
		cout<<"Novo salario: "<<s+(s*0.1)<<endl;
		cout<<"Reajuste ganho: "<<(s+(s*0.1))-s<<endl;
		cout<<"Em percentual: 10 %"<<endl;
}
	if (s>1200 && s<= 2000){
	
		cout<<"Novo salario: "<<s+(s*0.07)<<endl;
		cout<<"Reajuste ganho: "<<(s+(s*0.07))-s<<endl;
		cout<<"Em percentual: 7 %"<<endl;
}
	if (s>2000){
	
		cout<<"Novo salario: "<<s+(s*0.04)<<endl;
		cout<<"Reajuste ganho: "<<(s+(s*0.04))-s<<endl;
		cout<<"Em percentual: 4 %"<<endl;
}
return 0;
}
