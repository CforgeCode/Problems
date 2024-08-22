#include <iostream>

using namespace std;

main(){
	int d1,h1,m1,s1,d2,h2,m2,s2,total1,total2,total;
	
	cin >> d1;
	cin >> h1 >> m1 >> s1;
	cin >> d2;
	cin >> h2 >> m2 >> s2;
	


total1 = d1 * 86400 + h1 * 3600 + m1 * 60 + s1;
total2 = d2 * 86400 + h2 * 3600 + m2 * 60 + s2;

total = total2 - total1;

cout << total / 86400 << " dia(s)" << endl;
total = total % 86400;
cout << total / 3600 << " hora(s)" << endl;
total = total % 3600;
cout << total / 60 << " minuto(s)" << endl;
total = total % 60;
cout << total << " segundo(s)" << endl;

return 0;	
}
