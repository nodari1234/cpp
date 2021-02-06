#include <iostream>

using namespace std;

int main()

{
	int persone;
	int tassoDiPropagazione;
	int malati=1;
	int giorni=0;
    
	cout<<"inserisci il numero della persone :"<<endl;
	cin>>persone;
	cout<<"inserisci il tasso di propagazione :"<<endl;	
	cin>>tassoDiPropagazione;
	
    while(malati<persone)
	{
		malati=malati+(1*tassoDiPropagazione);
		giorni=giorni+1;
	}
  cout<<"i giorni necessari per far ammalare tutta la popolazione sono : "<<giorni<<endl;
	
	
	return 0;
}
