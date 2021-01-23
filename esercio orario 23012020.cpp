#include <iostream>
#include <string>
using namespace std;
int main()
{
	string x;
	string y;
	cout<<"inserisci due orari="<<endl;
	cin>>x;
	cin>>y;
	if(y>x)
	    cout<<"il primo orario viene prima del secondo"<<endl;
	else
		cout<<"il secondo orario viene prima del primo"<<endl; 
	return 0;
}
