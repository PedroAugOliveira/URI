#include <stdio.h>

using namespace std;

int main()
{
    int par=0, impar=0, pos=0, neg=0, n;

    for (int i = 0; i < 5; i++)
    {
        scanf("%i", &n);
        if (n > 0)
        {
         pos++;
        }

        else if (n < 0)
        {
            neg++;
        }
        
        if (n%2 == 0)
        {
            par++;
        }
        
        else
        {
            impar++;
        }
        
        
    }
    
    printf("%i valor(es) par(es)\n", par);
    printf("%i valor(es) impar(es)\n", impar);
    printf("%i valor(es) positivo(s)\n", pos);
    printf("%i valor(es) negativo(s)\n", neg);

    return 0;
}