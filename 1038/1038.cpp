#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int cod, quant;
    float total;

    cin >> cod >> quant;

    if (cod == 1)
        total = quant*4;
    else if (cod == 2)
        total = quant*4.5;
    else if (cod == 3)
        total = quant*5;
    else if (cod == 4)
        total = quant*2;
    else if (cod == 5)
        total = quant*1.5;

    printf("Total: R$ %.2f\n", total);

    return 0;
}
