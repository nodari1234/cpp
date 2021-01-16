#include <iostream>
#include <string>

using namespace std;

int main()
{
	int e;

	cout << "Inserisci la tua eta' " ;
	cin >> e;	
	
if(e >= 18){
	cout << "tu sei maggiorenne " << endl;
}
else
{
	cout << "Tu sei minorenne " << endl;
}
	return 0;
}
