#include <iostream>
#include <string>


using namespace std;


int main(int argc, char const *argv[]) {

char k;
string nome;
double voto,min,max,somma,media;
int i=0;


somma =0;
min = 11;
max = 0;

do {
  cout << "Inserisci il nome dell'alunno : " ;
  do {
    cin >> nome;
  } while(nome == "");


  cout << "Inserisci il voto di " << nome <<" : " ;
  do {
      cin >> voto;
  } while(voto < 0 || voto > 10);

  somma = somma + voto;

  if(voto > max)
    max = voto;

  if(voto < min)
    min = voto;


    i++;

    cout << "Vuoi inserire un altro voto?(S/N)" ;
    cin >> k;

} while(k == 's' || k=='S');

media = somma / i;

cout << "La media dei voti è : " << media << endl;
cout << "Il voto massimo è stato : "<< max << endl;
cout << "Il minimo è stato : " << min << endl;


  return 0;
}
