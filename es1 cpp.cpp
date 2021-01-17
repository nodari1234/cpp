#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string x;
	cout << "inserisci il tuo nome" <<endl;
	cin >> x;
	
    if(x == "Nodari" || x == "nodari")
	{
		cout << "Ciao Nodari" << endl;
	}
	else
	{
		cout <<"non ti conosco Game Over";
	}
	
	return 0;
}
