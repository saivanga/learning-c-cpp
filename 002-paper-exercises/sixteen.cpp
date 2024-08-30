#include <iostream>

using namespace std;

int main()
{

    int rows = 10;
    int columns = 10;

    while (columns != 0)
    {
        for (rows; rows != 0; rows--)
        {
            cout << "$ ";
        }
        cout << endl;
        columns--;
    }

    return 0;
}