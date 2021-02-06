#include <iostream>
#include <cstdlib>

using namespace std;

int main()

{
	int persone;
	double tassoDiPropagazione;
	double malati=1;
	int giorni=0;

	cout<<"inserisci il numero della persone :"<<endl;
	cin>>persone;
	cout<<"inserisci il tasso di propagazione :"<<endl;
	cin>>tassoDiPropagazione;
	if (tassoDiPropagazione <= 1){
		cout << "Il tasso non va bene" << endl;
		return 1;
	}

    while(malati<persone/2)
	{
		malati=malati*tassoDiPropagazione;
		cout << malati << endl;
		//giorni=giorni+1;
		//giorni+=1;
		giorni++;
	}
  cout<<"i giorni necessari per far ammalare almen la metà della popolazione sono : "<<giorni<<endl;
	system("read -p 'Pause' var");

	return 0;
}c=c+1
