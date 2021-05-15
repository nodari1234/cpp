#include <iostream>

using namespace std;

const float PR_GELATO = 0.50;
const float PR_PANE = 2.10;
const float PR_CARNE = 5.43;
const float PR_PESCE = 3.66;

const float MN_50 = 0.50;
const float MN_20 = 0.20;
const float MN_10 = 0.10;
const float MN_5 = 0.05;
const float MN_2 = 0.02;
const float MN_1 = 0.01;



//stampa menu e ritorna l'elemento scelto
int menu(){
	int k;
	
	cout << "1) Gelato - " << PR_GELATO<< "E" << endl;
	cout << "2) Pane - " << PR_PANE<< "E" << endl;
	cout << "3) Carne  - " << PR_CARNE<< "E" << endl;
	cout << "4) Pesce - " << PR_PESCE<< "E" << endl;
	
	cout <<"Inserisci la tua scelta : ";
	do
		cin >> k;
	while(k<1 || k>4);

	return k;
}

float inserisciSoldi(float prezzoArticolo){
	/*
		inserimento soldi
		per esempio inserisco 22, prezzo è 20
		resto = 2€
	*/
	
	
	return resto;	
}

void resto(float resto){
	/*
		stampare il resto
		se il prezzo è 3,88
		
		50, 50, 50, 50, 50, 50, 50, 20, 10, 5, 2, 2, 1
	*/
}



int main(){
	float r;
	
	int k;
	k = menu();
	
		cout << "hai scelto : " ;
	switch(k){
		case 1:
			r = inserisciSoldi();
			break;
		case 2:
			r = inserisciSoldi();
			break;
		case 3:
			r = inserisciSoldi();
			break;
		case 4:
			r = inserisciSoldi();
			break;
		default:
			break;
	}
	
	resto(r);
	
	return 0;
}
