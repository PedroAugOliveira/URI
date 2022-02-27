#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

int main()
{
    float x1, x2, y1, y2, dist;
    cin >> x1 >> y1 >> fixed;
    cin >> x2 >> y2 >> fixed;

    dist = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);

    printf("%.4f\n", sqrt(dist));
    return 0;
}
