#include <iostream>
#include <string>

using namespace std;


int main(int argc, char const *argv[]) {
  int dim;

  cout << "Inserisci la dimensione dell'array : ";
  cin >> dim;

  int arr[dim];
  int temp[dim];

  for (int i = 0; i < dim; i++) {
    cout << "inserisci il numero alla posizione " << i <<  " : " ;
    cin >> arr[i];
  }

  for (int i = 0; i < dim; i++) {
    temp[dim-1-i] = arr[i];
  }
  for (int i = 0; i < dim; i++) {
    arr[i] = temp[i];
  }
  for (int i = 0; i < dim; i++) {
    cout << arr[i];
  }

  return 0;
}
