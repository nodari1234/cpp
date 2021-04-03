#include <iostream>
using namespace std;
int main(){
int a,temp;
cout<<"inserire";
cin>>a;
int b[a];
cout<<"inserire un nume";
for(int i=0; i<a; i++)
	cin>>b[i];
	for(int j=0; j<a-1; j++)
		for(int i=0; i<a-1; i++)
			if(b[i]>b[i+1]){
				temp=b[i];
				b[i]=b[i+1];
				b[i+1]=temp;
			
		
	}
			
			
	cout<<"Array ordinato con bubble sort:";
	for(int i=0;i<a;i++)
		cout<<" "<<b[i];

	return 0;
}

