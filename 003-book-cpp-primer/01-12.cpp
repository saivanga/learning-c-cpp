#include <iostream>

using namespace std;

int main()
{
    // This prints the opposite factorial (100 - 0) and then adds them (-5050 + 1, -5049 + 2...)
    // the final value of sum is 0
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
    {
        sum += i;
        cout << sum << endl;
    }

    return 0;
}