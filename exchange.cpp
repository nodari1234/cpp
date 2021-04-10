/*Dobbiamo realizzare un programma che calcola la conversione di valuta.
Per esempio EUR-USD. 1eur = 1.25 dollaro americano.

Quindi l’utente deve inserire il tasso di cambio così:

Inserisci la valuta da dove convertire: [qui utente inserisce la valuta per esempio EUR]
Inserisci la valota di conversione: [DOL]

Dopo di che dobbiamo caricare un array di 5 elementi con i valori EUR e dobbiamo calcolare un altro array con i valori convertiti.

per esempio

conversione 1 - 1.25

array:
A[1; 2; 10; 50; 3]

array convertito:
B[1.25; 2.50; 12.50; 62.25; 3.75]

E stampa i risultati
*/
#include <iostream>
using namespace std;
int main(){
	
	float EUR[5],DOL[5];
	int somma;
	cout<<"inserire la valuta di convertire in dollari: "<<endl;
	
	for(int i = 0; i<5; i++){
		
     	cin>>EUR[i];
     	DOL[i]=EUR[i]+EUR[i]/100*0.25;
	}


	cout<<"soldi in euro inseriti : "<<endl;
	
	for(int i=0;i<5;i++)
		cout<<" "<<EUR[i];
		
	cout<<endl;
	
	cout<<"soldi in dollari convertiti : "<<endl;
	
	for(int i=0;i<5;i++)
		cout<<" "<<DOL[i];


	return 0;
}
