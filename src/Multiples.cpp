#include<iostream>

using namespace std;

int main(){
    int A,B;
 cout<< "Enter the first number : ";
 cin>> A;
 cout<< "Enter the second number : ";
 cin>> B;

    if(A%B==0 ||B%A==0){
        cout<< "Multiples"<<endl; 
    }
    else {
        cout<< "No Multiples"<<endl;
    }
return 0;

}