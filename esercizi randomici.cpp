/*
 *inserire un numero  intero dichiarare un array di dimensione N
 *carichi array di numeri random da 100 a 200
 * ordini array
 *stampi
*/

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
int main(){
	
	srand (time(NULL));
	int a,temp;
	cout<<"inserire dimensione del array : ";
	cin>>a;
	int b[a];
	cout<<"inserire un numero";
	for(int i=0; i<a; i++)
		b[i]= rand() % 200 + 100 ;
	
		for(int j=0; j<a-1; j++)
			for(int i=0; i<a-1-j; i++)
		
				if(b[i]>b[i+1]){
					temp=b[i];
					b[i]=b[i+1];
					b[i+1]=temp;
	}
			
			
	cout<<"Array randomico  ordinato con bubble sort : ";
	for(int i=0;i<a;i++)
		cout<<" "<<b[i];

	return 0;
}
