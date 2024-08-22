#include <iostream>

using namespace std;

main(){
	int h1, m1,h2,m2, hora, minuto;
	
	cin>>h1>> m1>>h2>>m2;
	
	if (h1<h2){
		hora = h2 - h1;
		
	}
	if (h1>=h2&&m1>=m2){
		hora = (24 -h1) + h2;
		minuto = (60-m1)+m2;
	}
	if (m1<=m2){
		minuto = m2-m1;
	}
	
	if (m1>m2){
	minuto =(60-m1)+m2;
	hora = hora -1;
	}
	
		
	cout<<"O JOGO DUROU "<<hora <<" HORA(S) E "<< minuto <<" MINUTO(S)" <<endl;
}
