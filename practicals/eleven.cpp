#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "What number: ";
    cin >> number;

    const int ones = number % 10;

    number = number / 10000;
    const int tenThousands = number;

    cout << "The subtraction: ";
    cout << tenThousands - ones << endl;

    return 0;
}