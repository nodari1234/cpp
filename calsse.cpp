//
// Created by nikam on 10/04/2021.
//

#include <iostream>
#include <string>


using namespace std;

int main(){
	
	int NUM; 
	float tempn;
	string temps;
	
	cout<<"quanti profili si vogliono inserire : ";
	cin>>NUM;
	
	float voti[NUM];
	string nomi[NUM];
	
	for(int i=0; i<NUM; i++){

		cout<<"inserire il nome dell'alunno : " ;
		cin>>nomi[i];
		cout<<"inserire il voto dell'alunno : " ;
		cin>>voti[i];	
	}
	
	for(int i =0; i<NUM; i++)
		for(int j=0; j<NUM-1; j++)
			if(nomi[j]>nomi[j+1]){
				
				temps=nomi[j];
				nomi[j]=nomi[j+1];
				nomi[j+1]=temps;
				
				tempn=voti[j];
				voti[j]=voti[j+1];
				voti[j+1]=tempn;
				
		
	}
	cout<<"ordinazione per nome : "<<endl;		
			
	for(int i=0; i<NUM; i++)
		cout<<nomi[i]<<" - "<<voti[i]<<endl;
	
	
	
		

		for(int i =0; i<NUM; i++)
			for(int j=0; j<NUM-1; j++)
				if(voti[j]>voti[j+1]){
				
					tempn=voti[j];
					voti[j]=voti[j+1];
					voti[j+1]=tempn;
					
				
					temps=nomi[j];
					nomi[j]=nomi[j+1];
					nomi[j+1]=temps;
				
		}
		cout<<"ordinazione per voto : "<<endl;	
			
		for(int i=0; i<NUM; i++)
			cout<<voti[i]<<" - "<<nomi[i]<<endl;
			
		
		
		
	

		for(int i =0; i<NUM; i++)
			for(int j=0; j<NUM-1; j++)
				if(voti[j]>voti[j+1]){
				
					tempn=voti[j];
					voti[j]=voti[j+1];
					voti[j+1]=tempn;
					
				
					temps=nomi[j];
					nomi[j]=nomi[j+1];
					nomi[j+1]=temps;
				
		}
		cout<<"array che contine i voti da 5 a 7: "<<endl;	
		
		for(int i=0; i<NUM; i++)
			if(voti[i]>=5 && voti[i]<=7)
				cout<<voti[i]<<" - "<<nomi[i]<<endl;
				
			
			
			
		
	return 0;
}
