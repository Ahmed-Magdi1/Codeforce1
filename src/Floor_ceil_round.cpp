#include<iostream>
#include <cmath>

int main()
{
using namespace std;
double a,b,c,d,e;

cout << "Enter the two numbers : ";
cin >>a;
cin >>b;

c=floor((a)/(b));
d=ceil((a)/(b));
e=round((a)/(b));
cout <<"Floor = "<<c;
cout <<"\nCeil = "<<d;
cout <<"\nround = "<<e<<endl;

return 0;


}