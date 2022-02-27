#include <stdio.h>

using namespace std;

int main()
{
    int par=0, n;

    for (int i = 0; i < 5; i++)
    {
        scanf("%i", &n);
        if (n%2 == 0)
        {
            par++;
        }
        
    }
    printf("%i valores pares\n", par);

    return 0;
}