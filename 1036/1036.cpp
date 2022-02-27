#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    double a,b,c,d;
    cin >> a >> b >> c;

    d = b*b -(4.0*a*c);

    if (d < 0 || a*2 == 0)

        cout << "Impossivel calcular" << endl;
    else{
        printf("R1 = %.5f\n", ((-b)+sqrt(d))/(2.0*a));
        printf("R2 = %.5f\n", ((-b)-sqrt(d))/(2.0*a));
    }
    return 0;
}
