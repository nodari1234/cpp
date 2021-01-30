#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int cont60 = 0;//numero di veicoli che sono andati sopra 60
int vmax60 = 0;//la velocità massimo sopra 60
string k_str; // 60km/h
int k;

char h;

int main(int argc, char const *argv[]) {

  do{
    cout << "Inserisci la velocità : ";
    cin >> k_str;

    k=stoi(k_str.substr(0,k_str.length()-4));


    if (k > 60){
      cont60 = cont60 +1;
      if(k > vmax60)
        vmax60 =k;
    }

  cout << "Vuoi inserire un altro veicolo? (s/n) ";
  cin >> h;


}while(h == 's');
cout << "Il numero di veicoli che sono andati sopra 60km/h sono : " << cont60 <<endl;
cout << "La velocità massima sopra 60 era : " << vmax60 << endl;
  return 0;
}
