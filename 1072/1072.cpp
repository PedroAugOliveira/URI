#include <stdio.h>

using namespace std;

int main()
{
    int n, x, in=0, out=0;

    scanf("%i", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%i", &x);
        if (x >= 10 && x <= 20)
        {
            in++;
        }
        else
        {
            out++;
        }
        
    }
    printf("%i in\n", in);
    printf("%i out\n", out);
    return 0;
}