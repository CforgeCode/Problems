#include <iostream>

using namespace std;

main(){
	int A,B,C;
	cin>>A>>B>>C;
		
	if (A>B&&B>C){
		cout<<C<<endl;
		cout<<B<<endl;
		cout<<A<<endl;
}
	if (A>C&&C>B){
		cout<<B<<endl;
		cout<<C<<endl;
		cout<<A<<endl;
}
	if (B>A&&A>C){
		cout<<C<<endl;
		cout<<A<<endl;
		cout<<B<<endl;
}
	if (B>C&&C>A){
		cout<<A<<endl;
		cout<<C<<endl;
		cout<<B<<endl;
}
	if (C>A&&A>B){
		cout<<B<<endl;
		cout<<A<<endl;
		cout<<C<<endl;
}
	if (C>B&&B>A){
		cout<<A<<endl;
		cout<<B<<endl;
		cout<<C<<endl;
}	
cout<<endl;
cout<<A<<endl;
cout<<B<<endl;
cout<<C<<endl;

return 0;
}



