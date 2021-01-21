#include <iostream>
using namespace std;
int main ()
{
    const int prevSociale = 100;
    int eta;
    int valore1;
	cout<<" inserci la tua eta': ";
	cin >> eta;
	if(eta>0)
	{
	    if (eta>=18 && eta<=60)
	    {
	    	cout<<"  la tua previdenza sociale e': ";
	    	cout<<prevSociale;
        } 
        else
		{
	        if(eta<18)
	        {
	            valore1=100+(100*20/100);
	      		cout<<"  la tua previdenza sociale e': ";
	      		cout<<valore1;
	        }
	        else
	        {
	        	valore1=100+(100*35/100);
	      		cout<<"  la tua previdenza sociale e': ";
	      		cout<<valore1;
			}
     	} 	 	
    }
    else
	{
		cout<<" metti la tua vera eta' "<<endl;
    	return 1;
    }
	return 0;
}
	

	
	
	
	
	
	
	




