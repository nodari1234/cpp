#include <iostream>

#include <string>

using namespace std;

void provaNome(string nome)

{
	
	cout<<"ciao "<<nome<<endl;
}

int main(){
	
	  string nome;
	  
	  cout<<"quale e il tuo nome ? ";
	  
	  cin>>nome;
	  
	  provaNome(nome);
	  
	  return 0;
}
