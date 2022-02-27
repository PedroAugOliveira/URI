#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    float sal, novosal=0;

    scanf("%f", &sal);

    if (sal <= 400.00){
        novosal = sal + (sal*0.15);
        printf("Novo salario: %.2f\n", novosal);
        printf("Reajuste ganho: %.2f\n", sal*0.15);
        printf("Em percentual: 15 %%\n");

    }

    else if (sal >= 400.01 && sal <= 800.00){
        novosal = sal + (sal*0.12);
        printf("Novo salario: %.2f\n", novosal);
        printf("Reajuste ganho: %.2f\n", sal*0.12);
        printf("Em percentual: 12 %%\n");
    }

    else if (sal >= 800.01 && sal <= 1200.00){
        novosal = sal + (sal*0.10);
        printf("Novo salario: %.2f\n", novosal);
        printf("Reajuste ganho: %.2f\n", sal*0.10);
        printf("Em percentual: 10 %%\n");
    }

    else if (sal >= 1200.01 && sal <= 2000.00){
        novosal = sal + (sal*0.07);
        printf("Novo salario: %.2f\n", novosal);
        printf("Reajuste ganho: %.2f\n", sal*0.07);
        printf("Em percentual: 7 %%\n");
    }

    else {
        novosal = sal + (sal*0.04);
        printf("Novo salario: %.2f\n", novosal);
        printf("Reajuste ganho: %.2f\n", sal*0.04);
        printf("Em percentual: 4 %%\n");
    }
}
