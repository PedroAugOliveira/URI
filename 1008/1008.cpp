#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int F, horatrab;
    float valor, equacao;

    cin >> F >> horatrab >> valor;
    equacao = horatrab * valor;

    printf("NUMBER = %i\n", F);

    printf("SALARY = U$ %.2f\n", equacao);
    return 0;
}
