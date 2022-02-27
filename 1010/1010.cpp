#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int codigo1, quantidade1, codigo2, quantidade2;
    float valor1, valor2, resultado;

    cin >> codigo1 >> quantidade1 >> valor1 >> fixed;
    cin >> codigo2 >> quantidade2 >> valor2 >> fixed;

    resultado = valor1*quantidade1 + valor2*quantidade2;


    printf("VALOR A PAGAR: R$ %.2f\n", resultado);

    return 0;
}
