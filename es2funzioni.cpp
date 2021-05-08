#include <iostream>
using namespace std;

double provaNum(double num1, double num2)
{

		if(num1>=num2)
			return num1;
		else
			return num2;
}



int main(){
	
	double num1, num2;
	
	cout<<"inserire due numeri : "<<endl;
	
	cin>>num1;
	cin>>num2;
	
	cout<<"il numero piu grande e "<<provaNum(num1, num2)<<endl;
	
	
	return 0;
}
