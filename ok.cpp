#include <iostream>
using namespace std;
int main(){
float media;
int numero;
float somma;
cout<<"inserire un numero : ";
cin>>numero;
int numeriTutti[numero];
	for(int i =0; i<numero; i++){
		cout<<"inserire un numero : ";
		cin>>numeriTutti[i];
		somma=somma+numeriTutti[i];
	}
	
cout<<"la somma e "<<somma<<endl;
cout<<"la media e "<<somma/numero<<endl;
}
