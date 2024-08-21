#include <iostream>

using namespace std;

int main()
{
    cout << "This Program prints the area and the perimeter using the given length and width" << endl;
    cout << "--------------------------------------" << endl;
    double length;
    double width;

    cout << "What is the width of the rectangle: ";
    cin >> width;

    cout << "What is the length of the rectangle: ";
    cin >> length;

    cout << "The area is: " << length * width << endl;
    cout << "The perimeter is: " << 2 * length + 2 * width << endl;
    return 0;
}