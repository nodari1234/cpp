#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[]) {
  int n,k;
  int i=0;
  int max=INT_MIN;
  int min=INT_MAX;

  cout << INT_MAX << endl;
  cout << INT_MIN<< endl;

  cout << "Quanti numeri vuoi inserire ? : " ;
  do{
  cin >> n;
}while(n < 1 || n > 100);


  while(i<n){
    cout << "inserisci un numero ";

    cin >>k;
    if(k > max)
      max =k;

    if(k<min)
      min = k;
    i=i+1;
  }

  cout << "il numero massimo inserito è  " << max << endl;
  cout << "il numero mininmo inserito è  " << min << endl;


  return 0;
}
