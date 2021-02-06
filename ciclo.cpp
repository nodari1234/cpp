#include <iostream>

using namespace std;

int main() {

  int i = 0;
  int s = 0;

  while(i<100){
    cout << i << endl;

    i = i+1;
    s=s+i;
  }

  cout << "Ho finito il ciclo " << endl;
  cout << "La somma è :  " << s << endl;




  return 0;
}
