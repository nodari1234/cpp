#include <iostream>
using namespace std;

void provaFibonacci(int b, int j, int terzo, int primo, int secondo){
 	for(j=2;j<b;j++)
	 {
          terzo=primo+secondo;
          primo=secondo;
          secondo=terzo;
          cout<<","<<terzo;
	 }
}
int main () {
     int j, b, primo=1, secondo=1, terzo=0;

	    cout<<"Quanti numeri vuoi avere (p.s=devono essere piu di 2 se no non ha senso) ?  ";
	    cin>>b; 
    
     
     cout<<"i primi "<<b<<" numeri di fibonacci sono : "<<endl;
     
     
     cout<<primo<<","<<secondo;

    
	provaFibonacci(b, j, terzo, primo, secondo);

    return 0;
}
