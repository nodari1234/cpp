#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int length = 10;
  int voti[length];


  for (int i = 0; i < length; i++) {
    cin >> voti[i];
  }


  for (int i = 0; i < length; i++) {
    cout << voti[i] << endl;
  }


  return 0;
}
