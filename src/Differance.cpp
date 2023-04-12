#include<iostream>

using namespace std;

int main(){
    int a,b,c,d,s;
    cout << "Enter the numbers : ";
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    s=(a*b)-(c*d);
    cout <<"("<<a<<"*"<<b<<")"<<"-"<<"("<< c<<"*"<<d<<")" <<" = " << s << endl;

    return 0;


}