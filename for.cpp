#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  int i=0;
  int s=0;
  int a=0;

  while(i<=100){
    s=s+i;
    i=i+1;}

  cout << s <<endl;

  s=0;

  for (int i = 1; i <= 100; i++) {
    s=s+i;
  }
cout << s <<endl;

  return 0;
}
