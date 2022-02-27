#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int tempo, vm;
    float litros;
    cin >> tempo >> vm;
    litros = vm * tempo / 12.0;

    printf("%.3f\n", litros);

    return 0;
}
