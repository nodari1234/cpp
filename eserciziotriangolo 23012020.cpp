#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout<<"inserisci tre numeri naturali"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	if(!(a==b==c || a==c || a==b || c==b))
		cout<<"questi tre numeri possono essere le lunghezze di un triangolo"<<endl;
	else
	    cout<<"questi tre numeri non possono essere le lunghezze di un triangolo"<<endl;
	return 0;
}
