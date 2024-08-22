#include <iostream>

using namespace std;

int main(){
	int n, x, y, soma;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		if (x % 2 == 1) {
			soma = x;
		} else {
			soma = x + 1;
			x += 1;
		}
		for (int cont = 1; cont < y; cont ++) {
			soma = soma + (x + (2 * cont));
						
		}cout<<soma<<endl;
	}
		
}
