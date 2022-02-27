#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    double salario_fixo, vendas_mes;
    string nome;

    cin >> nome >> salario_fixo >> vendas_mes;


    printf("TOTAL = R$ %.2f\n", 0.15*vendas_mes + salario_fixo);
    return 0;
}
