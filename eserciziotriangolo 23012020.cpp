#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout<<"inserisci tre numeri naturali"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	if(a+b>c && a+c >b && c+b > a)
		cout<<"questi tre numeri possono essere le lunghezze di un triangolo"<<"\n";
	else
	    cout<<"questi tre numeri non possono essere le lunghezze di un triangolo"<<endl;
	return 0;
}
