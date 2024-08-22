#include <iostream>

using namespace std;

main(){
	int entrada, resto;
	
	cin>> entrada;
	
	cout<<entrada<<endl;
	
	cout<< entrada/100<<" nota(s) de R$ 100,00"<<endl;
	resto = entrada - ((entrada/100)*100);
	
	cout<< resto/50<<" nota(s) de R$ 50,00"<<endl;;
	resto = resto - ((resto/50)*50);

	cout<< resto/20<<" nota(s) de R$ 20,00"<<endl;;
	resto = resto - ((resto / 20)*20);
	
	cout<< resto/10<<" nota(s) de R$ 10,00"<<endl;;
	resto = resto - ((resto / 10)*10);

	cout<< resto/5<<" nota(s) de R$ 5,00"<<endl;;
	resto = resto - ((resto / 5)*5);
	
	cout<< resto/2<<" nota(s) de R$ 2,00"<<endl;;
	resto = resto - ((resto / 2)*2);		
	
	cout<< resto<<" nota(s) de R$ 1,00"<<endl;;
	
	return 0;
}
