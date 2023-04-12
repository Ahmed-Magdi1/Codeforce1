#include<iostream>

using namespace std;

int main(){
    int A,B,C;

    cout << "Enter the three numbers : ";
    cin >> A >>B >>C;

    int min_num = min(A, min(B, C));
    int max_num = max(A, max(B, C));

    cout << min_num <<" " << max_num << endl;
    

return 0;

    
}