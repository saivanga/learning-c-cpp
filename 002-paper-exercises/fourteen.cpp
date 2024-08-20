#include <iostream>

using namespace std;

int main()
{
    int money;
    cout << "How much you bought: ";
    cin >> money;

    if (money > 500)
    {
        cout << "You pay: $" << money * .15 << endl;
    }
    else
    {
        cout << "You pay: $" << money << endl;
    }

    return 0;
}