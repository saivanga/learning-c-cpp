#include <iostream>

using namespace std;

int main()
{

    int rows = 10;
    int columns = 10;

    while (columns != 0)
    {
        for (int rows = 1; rows <= 9; rows++)
        {
            cout << rows << " ";
        }
        cout << endl;
        columns--;
    }

    return 0;
}