#include <iostream>
using namespace std;

int main() {
    int a, b, cont;
    cin >> a >> b;
    
    while (a > 0 && b > 0) {
        cont = 1;
        if (a > b && cont != a) {
            while (cont != a) {
                cout << (b + (a - b)) + (a - (b + cont)) << " ";
                cont = cont + 1;
                
            }
        } else {
            while (cont <= b) {
                cout << a + (b - a) + (b - (a + cont)) << " ";
                cont = cont + 1;
            }
        }
    
	}return 0;}

