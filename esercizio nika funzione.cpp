/* Nika: fai un programmtutte questa che ha 4 funzioni somma, differenza, prodotto e quoziente a cui passi 2 float e ti restituisce una variabile float
/Nika: e poi dal mai chiama e quattro funzioni
Nika: e stampa i risultati
*/
#include<iostream>

using namespace std;
	
	
	
float getSomma(float num1, float num2){

	float somma;

	somma=num1+num2;

	return somma;

}



float getDifferenza(float num1, float num2){
	
	float differenza;
	
	differenza=num1-num2;
	
	return differenza;
	
}



float getProdotto(float num1, float num2){
	
	float prodotto;
	
	prodotto=num1*num2;
	
	return prodotto;
}




float getQuoziente(float num1, float num2){
	
	float quoziente;
	
	quoziente=num1/num2;
	
	return quoziente;
}


int main(){
	
	
	float num1, num2, somma, differenza, quoziente, prodotto;
	
	cout<<"inserire due numeri : "<<endl;
	
	
	
	cin>>num1;
	
	cin>>num2;
	
	
	
	
	somma = getSomma(num1, num2);
	
    differenza = getDifferenza(num1, num2);
    
	quoziente = getQuoziente(num1, num2);
	
	prodotto = getProdotto(num1, num2);
	
	
	
	
	
	cout<<"somma = "<< somma << endl;
	
	cout<<"differenza = "<< differenza << endl;
	
	cout<<"prodotto = "<< prodotto << endl;
	
	cout<<"quoziente = "<< quoziente << endl;
	
	
	
	system("pause");
	return 0;
}
