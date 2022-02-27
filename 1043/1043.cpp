#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

    float a, b, c, peri=0, area=0;

    cin >> a >> b >> c;

    if (a + b > c && b + c > a && c + a > b)
    {
        peri = a + b + c;
        printf("Perimetro = %.1f\n", peri);
    }

    else
    {
        area = (a+b)*c/2;
        printf("Area = %.1f\n", area);
    }
    
    return 0;
}