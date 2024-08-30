#include <iostream>

using namespace std;

int main()
{
    cout << "Explaing the differences between for and while loops" << endl;
    cout << "----------------------------------------------------" << endl;

    cout << "Printing 1 - 10 with for" << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }

    cout << "----------------------------------------------------" << endl;

    cout << "Printing 1 - 10 with while" << endl;

    int i = 1;

    while (i <= 10)
    {
        cout << i << endl;
        ++i;
    }

    return 0;
}