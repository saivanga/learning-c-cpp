#include <iostream>

using namespace std;

int main()
{
    cout << "This Program takes a two numbers and puts them into two variables; then it flips the values; v1 = 2, v2 = 3. After v1 = 3, v2 = 2" << endl;
    cout << "--------------------------------------" << endl;
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