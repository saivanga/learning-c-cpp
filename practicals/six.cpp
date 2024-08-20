#include <iostream>

using namespace std;

int main()
{
    double celsius;

    cout << "What Temperature: ";
    cin >> celsius;

    double conversion = (celsius * 9 / 5) + 32;

    cout << "In Fahrenheit: " << conversion << endl;

    return 0;
}