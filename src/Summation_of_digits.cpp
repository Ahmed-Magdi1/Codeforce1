#include<iostream>
#include <iomanip>
#include <cmath>

int a,b,mod1,mod2,result;
int main(){
    using namespace std;
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;

    if(a>=10 && a<20)
    {
        mod1=a-10;
    }
    else if(a>=20 && a<30)
    {
        mod1=a-20;
    }
    else if(a>=30 && a<40)
    {
        mod1=a-30;
    }
    else if(a>=40 && a<50)
    {
        mod1=a-40;
    }
    else if(a>=50 && a<60)
    {
        mod1=a-50;
    }

    if(b>=10 && b<20)
    {
        mod2=b-10;
    }
    else if(b>=20 && b<30)
    {
        mod2=b-20;
    }
    else if(b>=30 && b<40)
    {
        mod2=b-30;
    }
    else if(b>=40 && b<50)
    {
        mod2=b-40;
    }
    else if(b>=50 && b<60)
    {
        mod2=b-50;
    }

    if(a>60 || b>60)
    {
        cout << "Large number for (first or second number) please run the program again to enter other numbers";
    }
    
     
    result=(mod1+mod2);
    cout <<mod1<<"+"<<mod2<<"="<<result<<endl;

    return 0;
    
}