#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main(){
    const double PI = 3.14159;
    double R, area;

    cout << "Enter the radius : ";
    cin >> R;
    area = PI * pow(R,2);

    cout << "The radius of the circle = ";
    cout << fixed << setprecision(2) << area << endl;
return 0;
}