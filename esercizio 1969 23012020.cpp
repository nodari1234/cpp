#include <iostream>
using namespace std;
int main ()
{
	int anno;
	int differenza;
	cout<<"inserisci il tuo anno di nascita"<<endl;
	cin>>anno;
	if(anno==1969)
		cout<<"complimenti,sei nato nell'anno in cui l'uomo e' andato sulla luna"<<endl;
	else
	{
		if(anno>1969)
		{
	    	differenza=anno-1969;
	    	cout<<"Sei nato ";
	    	cout<<differenza ;
	    	cout<<" anni dopo";
	    }
	    else
	    {
	    	differenza=1969-anno;
	    	cout<<"Sei nato ";
	    	cout<<differenza ;
	    	cout<<" anni prima";
		}
			
	}  
	return 0; 
}
