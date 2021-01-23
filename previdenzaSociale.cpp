#include <iostream>

using namespace std;

int main ()
{
  const int PREVSOCIALE = 100;

  int eta;
  int valore1 =PREVSOCIALE;

	cout<<" inserci la tua eta': ";
	cin >> eta;

  if(eta<=0){
    cout<<" metti la tua vera eta' "<<endl;
    return 1;
  }

  if(eta<18)
    //Aumento di 20%
    valore1=PREVSOCIALE+(100*20/100);
  else
    if(eta >= 60)
  	 valore1=PREVSOCIALE+(100*35/100);

  cout<<"La tua previdenza sociale e': " << valore1 << endl;

	return 0;
}
