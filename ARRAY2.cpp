#include <iostream>
using namespace std;
int main(){
	
	int a;
	
	int numeriIn[a];
	
		for(int i=0; i<5; i++){
		
		cout<<"inserire un numero intero : ";
		
		cin>>numeriIn[i];
	}
		
	int massimo=numeriIn[0];
	int posizioneMassimo = 0;
	

	for(int i=1; i<5; i++){
		
		if(massimo<numeriIn[i])
		{
		massimo=numeriIn[i];
		posizioneMassimo=i;
		}
	}   

    cout<<"il massimo e "<<massimo<<endl;
    
    cout<<"la posizione del massimo e "<<posizioneMassimo<<endl;
    
	system("pause");
	
	return 0;
}
