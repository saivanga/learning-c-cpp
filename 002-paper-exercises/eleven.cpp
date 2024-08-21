#include <iostream>

using namespace std;

int main()
{
    cout << "This Program takes the first and last number in a five digit number and subtracts them; 12345, 5 - 1 = 4" << endl;
    cout << "--------------------------------------" << endl;
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