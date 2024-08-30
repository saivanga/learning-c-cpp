#include <iostream>

using namespace std;

int main()
{
    cout << "This program takes the given start and end numbers to print all the numbers in between" << endl;
    cout << "------------------------------------------------" << endl;

    int start;
    cout << "Where should it start: ";
    cin >> start;
    int end;
    cout << "Where should it end: ";
    cin >> end;

    while (start <= end)
    {
        cout << start << endl;
        ++start;
    }

    return 0;
}