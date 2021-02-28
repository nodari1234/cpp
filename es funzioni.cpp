#include <iostream>

using namespace std;

int getArea(int base, int altezza)
{

 int area;

 area=base*altezza;

 return area;
}



int getArea2(int base, int altezza)
{
 return getArea(base,altezza)/2;
}



int main(){
 int area, base, altezza, area2 ;
 cout<<"inserire base e altezza del rettangolo : "<<endl;
 cin>>base;
 cin>>altezza;
 area= getArea(base, altezza);
 area2=getArea2(base, altezza);
 cout<<"L'area del rettangolo e' :'' "<<area<<endl;
 cout<<"L'area del triangolo e' :'' "<<area2<<endl;
 system("PAUSE");

 return 0;
}
