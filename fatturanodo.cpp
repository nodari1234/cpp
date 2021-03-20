#include <iostream>
#include <string>
using namespace std;
int main(){
	int quanti;
	float baseImp1=0;
	float baseImp2=0;
	float baseImp3=0;
	float totfat;
	string descri;
	float prezzo;
	int iva[5];
	float totale[5];
	
	  for (int i = 0; i < 5; i++) 
	  {
	  	cout<<"inserisci quantita del prodotto :";
	  	cin>>quanti;
	  	cout<<"inserisci descrizione del prodotto :";
		cin>>descri;
	  	cout<<"inserisci prezzo del prodotto:";
		cin>>prezzo;
	  	cout<<"inserisci iva del prodotto :";
	  	cin>>iva[i];
 		totale[i]=quanti*prezzo;
      }
 	for(int i = 0; i <5; i++)
	 {
		if(iva[i]==5)
			baseImp1=baseImp1 + totale[i];
		if(iva[i]==10)
			baseImp2=baseImp2 + totale[i];
		if(iva[i]==22)
			baseImp3=baseImp3 + totale[i];

	 }
	 		baseImp1=baseImp1*105/100;	
		baseImp2=baseImp2*110/100;	
		baseImp3=baseImp3*122/100;	
 	totfat = baseImp1 + baseImp2 + baseImp3;
 	
 	cout<<"il totale della fattura e : "<<totfat;
}
