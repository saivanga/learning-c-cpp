#include <iostream>

using namespace std;

int main()
{
    int marksOne;
    cout << "What are your marks for Subject 1 out of 100: ";
    cin >> marksOne;

    int marksTwo;
    cout << "What are your marks for Subject 2 out of 100: ";
    cin >> marksTwo;

    int marksThree;
    cout << "What are your marks for Subject 3 out of 100: ";
    cin >> marksThree;

    int marksFour;
    cout << "What are your marks for Subject 4 out of 100: ";
    cin >> marksFour;

    int marksFive;
    cout << "What are your marks for Subject 5 out of 100: ";
    cin >> marksFive;

    cout << (marksOne + marksTwo + marksThree + marksFour + marksFive) / 5 << "%" << endl ;

    return 0;
}