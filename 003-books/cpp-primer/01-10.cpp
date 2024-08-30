#include <iostream>

using namespace std;

int main()
{
    cout << "This program prints all the numbers from 10 to 0" << endl;
    cout << "------------------------------------------------" << endl;

    int num = 10;

    while (num >= 0)
    {
        cout << num << endl;
        --num;
    }

    return 0;
}