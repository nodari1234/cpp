//1) Scrivere un programma in C++ che legge un vettore(array) di interi di dimensione fissata e ne stampa la somma
#include <iostream>
using namespace std;
int main()
{
	int lenght, somma;
	
	cout<<"Quanti numeri interi vuoi fare la sommare?"<<endl;
	
	cin>> lenght;
	
	int numeriFissi[lenght];
	
	for(int i=0; i<lenght; i++){
		
		cout<<"inserire un numero intero : ";
		
		cin>>numeriFissi[lenght];
		
		somma=somma + numeriFissi[lenght];
	}
	
	cout<<"La somma e : "<<somma<<endl;

	
	system("pause");
	
	return 0;
}
