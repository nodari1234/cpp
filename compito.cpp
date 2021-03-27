/*
 *inserire un numero  intero dichiarare un array di dimensione N
 *carichi array di numeri random da 100 a 200
 * ordini array
 *stampi
 *2
 * inserisci numeri finche lutente non inserisce 0
 * calcolare massimo e minimo
 * media massimo minimo
 * quadrato della radice di minimo
 *
 * */

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
const int DIM = 6;
int main(){
	srand (time(NULL));

	int r = rand() % 4 + 1 ;
	cout << r << endl;
 }