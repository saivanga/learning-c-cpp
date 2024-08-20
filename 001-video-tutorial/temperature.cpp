#include <iostream>

using namespace std;

int main()
{
    double fahrenheit;

    cout << "What Temperature: ";
    cin >> fahrenheit;

    double conversion = (fahrenheit - 32) * 5 / 9;

    cout << "In Celsius: " << conversion << endl;

    return 0;
}