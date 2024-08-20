#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    int z;

    cout << x;
    cout << y;

    cout << "Enter a value for the variable X: ";
    cin >> x;

    cout << "Enter a value for the variable Y: ";
    cin >> y;

    z = x;
    y = x;
    z = y;

    cout << x;
    cout << y;
}