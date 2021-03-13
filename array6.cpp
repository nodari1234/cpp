#include <iostream>

using namespace std;

int main()

{
	int len = 8;
	bool diversi = true;
	
	int a[len];
	for(int i=0; i<len; i++)
	cin>>a[i];
	for(int i=0; i<len; i++)
		for(int j=0; j<len; j++)
			if(i!=j && a[i]==a[j])
				diversi=false;
	
	if(diversi==false)
		cout<<"ci sono 2 numeri uguali"<<endl;
	else
		cout<<"tutti i numeri sono diversi"<<endl;

				
		
	
	
	

	system("pause");
	
	return 0;
}
