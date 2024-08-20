#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "What number should be reversed: ";
    cin >> number;

    const int ones = number % 10;

    number = number / 10;
    const int tens = number % 10;

    number = number / 10;
    const int hundreds = number;

    cout << "The reversed number: ";
    cout << ones << tens << hundreds << endl;

    return 0;
}