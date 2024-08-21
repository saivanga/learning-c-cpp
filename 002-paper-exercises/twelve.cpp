#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "This Program prints distance to cities in KM, M, CM, IN using given distances" << endl;
    cout << "--------------------------------------" << endl;
    int cityOne;
    cout << "Distance to city 1: ";
    cin >> cityOne;

    int cityTwo;
    cout << "Distance to city 2: ";
    cin >> cityTwo;

    const int distanceKM = abs(cityOne - cityTwo);
    const int distanceIN = abs((cityOne - cityTwo) * 39370.1);
    const int distanceM = abs((cityOne - cityTwo) * 1000);
    const int distanceCM = abs((cityOne - cityTwo) * 100000);

    cout << "The Distances: ";
    cout << "Distance in inches: " << distanceIN << endl
         << "Distance in kilometers: " << distanceKM << endl
         << "Distance in meters: " << distanceM << endl
         << "Distance in centimeters: " << distanceCM << endl;

    return 0;
}