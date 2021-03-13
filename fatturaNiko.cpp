/*
* Un programma che simula la creazione di una fattura, con la quantità, descrizione
* prezzo e iva. Si fa il totale e poi seconda le diverse basi imponibili
* applica le iva a 5,10 e 22%.
*/
#include <iostream>
#include <string>

using namespace std;

//DIM è la dimensione dell'array
const int DIM = 5;

//Questa funzione prende in input l'array delle IVA e l'array dei totali,
//si calcola le basi imponibili e restituisce il totale della fattura.
double calcTot(int arrIva[DIM], double arrTot[5])
{
  double s1,s2,s3,tot;
  s1=0;
  s2=s1;
  s3=s2;

  for (int i = 0; i < DIM; i++) {
    if(arrIva[i] == 5)
      s1+=arrTot[i];
    else if(arrIva[i] == 10)
      s2+=arrTot[i];
    else if(arrIva[i] == 22)
      s3+=arrTot[i];
  }

  tot = s1*1.05 + s2*1.1 + s3*1.22;

  return tot;
}

//Questa funzione controlla l'iva inserita
bool ivaOk(int i){
  if(i == 5 || i == 10 || i == 22)
    return true;

   return false;
}


int main(int argc, char const *argv[]) {
  int arrIva[DIM];
  double arrTot[DIM],q,p,totFat;
  string d;

  for (int i = 0; i < DIM ; i++) {
    cout << i+1 << " :" << endl;
    cout << "Inserisci la quantità : " ;
    cin >> q;
    cout << "Inserisci la descrizione : ";
    cin >> d;
    cout << "Inserisci il prezzo  : ";
    cin >> p;
    cout << "Inserisci l'iva : ";
    cin >> arrIva[i];
    while(ivaOk(arrIva[i]) == false){
      cout << "L'iva non valida, inserisci di nuovo : ";
      cin >> arrIva[i];
    }

    arrTot[i] = q*p;
    cout << "------------------------------" << endl;
  }

  totFat = calcTot(arrIva,arrTot);

  cout << "****************************" << endl;
  cout << "Il totale della fattura è : " << totFat << endl;
  cout << "****************************" << endl;

  return 0;
}
