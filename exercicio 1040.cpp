#include <iostream>

using namespace std;

main(){
	float n1, n2,n3,n4,nrecu, media;
	cin>>n1>> n2>>n3>>n4;
	media = (((n1*2)+ (n2*3)+(n3*4)+n4)/10);
	
	cout<<"Media: "<<media<<endl;
	if (media>=7){
		cout<<"Aluno aprovado."<<endl;
	}
	
	if (media<7&&media>=5){
		cout<<"Aluno em exame."<<endl;
		cin>> nrecu;
		cout<<"Nota do exame: "<<nrecu<<endl;
		if (((nrecu + media)/2)>=5){
			cout<<"Aluno aprovado."<<endl;
		}else{
			cout<<"Aluno reprovado."<<endl;
		}
				
		cout<<"Media final: "<< (nrecu + media)/2	<<endl;
	}
	
	if (media<5){
		cout<<"Aluno reprovado."<<endl;
	}
				
	
}
