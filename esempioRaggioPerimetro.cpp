#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
	double raggio, perimetro, area;
	
	cout << "Inserisci il raggio : ";
	cin >> raggio;
	if (raggio <= 0)
		return 1;
	
	cout << "Insrisci 1 per calcolare l'area, inserisci 2 per calcolare il perimetro";
	cin >> n;
	if (n!=1 && n!=2)
		return 1;
	
	if(n == 1){
		area = 3.14 * raggio * raggio;
		cout << "L'area della circonferenza e' : " << area << endl; 
	}
	else
	{
		perimetro = 2*3.14*raggio;
		cout << "Il perimetro della circonferenza e' : " << perimetro << endl;
	}
	
	return 0;
}
