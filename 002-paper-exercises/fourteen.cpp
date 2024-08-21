#include <iostream>

using namespace std;

int main()
{
    cout << "This Program takes how much you bought and tells you if you can get a 15%/ discount" << endl;
    cout << "--------------------------------------" << endl;
    int money;
    cout << "How much you bought: $";
    cin >> money;

    if (money > 500)
    {
        cout << "You pay: $" << money * .85 << endl;
    }
    else
    {
        cout << "You pay: $" << money << endl;
    }

    return 0;
}