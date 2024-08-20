#include <iostream>

using namespace std;

int main()
{
    int money;
    cout << "How much you get paid: ";
    cin >> money;

    if (money >= 4000)
    {
        cout << "You get: $" << money * 1.18 << endl;
    }
    else
    {
        cout << "You get: $" << money * 1.15 << endl;
    }

    return 0;
}