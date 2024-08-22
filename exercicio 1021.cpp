#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

main(){
	float N,resto;
	cin>> N;
/*cria uma variável f para armazenar temporariamente
 as configurações de formatação de saída do objeto cout
, permitindo que você faça alterações temporárias e depois restaure as configurações originais*/
	ios_base::fmtflags f = cout.flags();

	cout<< "NOTAS:"<<endl;
	
	cout<<(N - fmod(N, 100))/100<<" nota(s) de R$ 100.00"<<endl;
	resto = fmod(N, 100);
	
	cout<<(resto - fmod(resto, 50))/50<<" nota(s) de R$ 50.00"<<endl;
	resto = fmod(resto, 50);
	
	cout<<(resto - fmod(resto, 20))/20<<" nota(s) de R$ 20.00"<<endl;
	resto = fmod(resto, 20);
		
	cout<<(resto - fmod(resto, 10))/10<<" nota(s) de R$ 10.00"<<endl;
	resto = fmod(resto, 10);
		
	cout<<(resto - fmod(resto, 5))/5<<" nota(s) de R$ 5.00"<<endl;
	resto = fmod(resto, 5);
		
	cout<<(resto - fmod(resto, 2))/2<<" nota(s) de R$ 2.00"<<endl;
	resto = fmod(resto, 2);
	
	cout<< "MOEDAS:"<<endl;
	
	cout<<(resto - fmod(resto, 1))/1<<" moeda(s) de R$ 1.00"<<endl;
	resto = fmod(resto, 1);
		
	cout<<(resto - fmod(resto,0.50))/0.50<<" moeda(s) de R$ 0.50"<<endl;
	resto = fmod(resto, 0.50);
	
	cout<<(resto - fmod(resto,0.25))/0.25<<" moeda(s) de R$ 0.25"<<endl;
	resto = fmod(resto, 0.25);
	
	cout<<(resto - fmod(resto,0.10))/0.10<<" moeda(s) de R$ 0.10"<<endl;
	resto = fmod(resto, 0.10);
	
	cout<<(resto - fmod(resto,0.05))/0.05<<" moeda(s) de R$ 0.05"<<endl;
	resto = fmod(resto, 0.05);
	cout<<fixed;
	cout.precision(0);
	cout<<resto*100<<" moeda(s) de R$ 0.01"<<endl;
	

	return 0;
}
