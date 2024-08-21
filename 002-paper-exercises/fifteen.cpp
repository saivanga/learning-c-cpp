#include <iostream>

using namespace std;

int main()
{
    double money;
    const int hra = 10;
    const int ta = 5;

    cout << "This program calculates your pay using HRA and TA" << endl;
    cout << "-------------------------------------------------" << endl;

    cout << "How much is your base salary: ";

    cin >> money;

    if (money < 4000)
    {
        cout << "Base salary: $" << money << endl;
        cout << "HRA: $" << (hra * money) / 100 << endl;
        cout << "TA: $" << (ta * money) / 100 << endl;
        cout << "Gross Salary: $" << money + (hra * money / 100) + (ta * money / 100) << endl;
    }
    else
    {
        cout << "Base salary: $" << money << endl;
        cout << "HRA: $" << (hra * money) / 100 + 0.02 << endl;
        cout << "TA: $" << (ta * money) / 100 + 0.01 << endl;
        cout << "Gross Salary: $" << money + (hra * money / 100 + 0.02) + (ta * money / 100 + 0.01) << endl;
    }

    return 0;
}