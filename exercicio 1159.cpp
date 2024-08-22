#include <iostream>

using namespace std;

int main(){
	int x, soma;
	cin >> x;
	while (x != 0) {
		
		if (x % 2 == 0 ) {
			soma = x;
		} else {
			soma = x + 1;
			x += 1;
		}
		for (int cont = 1; cont < 5; cont ++) {
			soma = soma + (x + (2 * cont));
						
		}cout<<soma<<endl;
	cin>> x;}
		
}
