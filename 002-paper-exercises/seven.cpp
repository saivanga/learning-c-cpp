#include <iostream>

using namespace std;

int main()
{
    double length;
    double witdh;

    cout << "What is the width of the rectangle: ";
    cin >> witdh;

    cout << "What is the length of the rectangle: ";
    cin >> length;

    cout << "The area is: " << length * witdh << endl;
    cout << "The perimeter is: " << 2 * length + 2 * witdh << endl;
    return 0;
}