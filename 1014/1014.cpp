#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main()
{
    int X;
    float Y;

    cin >> X;
    cout << setprecision(1) << fixed;
    cin >> Y;

    cout << setprecision(3) << fixed << X / Y << " km/l" << endl;

    return 0;
}
