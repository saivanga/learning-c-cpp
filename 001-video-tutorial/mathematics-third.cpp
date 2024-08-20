#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double pi = 3.1415926; 
    double radius;
    cout << "What is the radius of the circle: ";
    cin >> radius;

    const double area = pow(radius, 2) * pi;

    cout << area << endl;

    return 0;
}