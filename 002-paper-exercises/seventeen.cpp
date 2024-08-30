#include <iostream>

using namespace std;

int main()
{

    int rows = 10;
    int columns = 10;

    while (columns != 0)
    {
        for (int rows = 10; rows != 0; rows--)
        {
            cout << "$ ";
        }
        for (int rows = 10; rows != 0; rows--)
        {
            cout << "# ";
        }
        cout << endl;
        columns--;
    }

    return 0;
}