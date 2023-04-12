#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    char operation;
    cout << "Enter the first number :";
    cin >> num1;
    cout << "Enter the second number :";
    cin >> num2;
    cout << "Enter the operation symbol ex(+,-,*,/) :";
    cin >> operation;

    if(operation == '+'){
        cout <<num1<<""<<operation<<num2 <<"="<< num1+num2 <<endl;
    }
    else if(operation == '-'){
        cout <<num1<<""<<operation<<num2 <<"="<< num1-num2 <<endl;
    }
    else if(operation == '*'){
        cout <<num1<<""<<operation<<num2 <<"="<< num1*num2 <<endl;
    }
    else if(operation == '/'){
        cout <<num1<<""<<operation<<num2 <<"="<< num1/num2 <<endl;
    }
    else {
        cout << "Error operation" <<endl;
    }

return 0;

}