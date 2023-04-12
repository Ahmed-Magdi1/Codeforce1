#include<iostream>

int main()
{
    using namespace std;

    int a,result=0;
    cout << "please enter the number : ";
    cin >> a;

    for(int i=1; i<=a; i++){
        result +=i;
    }

    cout << "the summation of "<<a<<" = "<<result<<endl;

    return 0;

}