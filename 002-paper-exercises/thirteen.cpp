#include <iostream>

using namespace std;

int main()
{
    cout << "This Program tells you if you passed or failed" << endl;
    cout << "--------------------------------------" << endl;
    int score;
    cout << "What are your marks for Subject 1 out of 100: ";
    cin >> score;

    if (score > 35)
    {
        cout << "You Passed!" << endl;
    }
    else
    {
        cout << "You Failed." << endl;
    }

    return 0;
}