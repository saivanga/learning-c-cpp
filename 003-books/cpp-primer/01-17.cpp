#include <iostream>

using namespace std;

int main()
{
    cout << "The program asks for multiple numbers to tell you how many of each number there are" << endl;
    cout << "-----------------------------------------------------------------------------------" << endl;

    int currVal = 0;
    int val = 0;

    if (cin >> currVal)
    {
        int cnt = 1;
        while (cin >> val)
        {
            if (val == currVal)
            {
                ++cnt;
            }
            else {
                cout << currVal << " occurs " << cnt << " times " << endl
            }
            
        }
        
    }
    

    return 0;
}