#include <iostream>

using namespace std;

int main()
{
    cout << "The program asks for multiple numbers to add and adds them" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "NOTE: The program below needs to manually go to the end-of-file after entering the numbers you want added. " << endl <<"To go to end-of-file on Mac OS or linux please press ctrl + d. " << endl << "For Windows press ctrl + z enter / return" << endl;

    int numbers;
    int sum;

    cout << "What numbers should be added: ";

    for (int i = 0; cin >> numbers; numbers > i)
    {
        sum += numbers;
    }

    cout << "The sum of the numbers you gave are: " << sum << endl;

    return 0;
}