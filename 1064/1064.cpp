#include <stdio.h>

using namespace std;

int main()
{   
    double n, tot = 0, pos;

    for (int i = 0; i < 6 ; i++)
    {
        scanf("%lf", &n);
        fflush(stdin);
        if (n >0)
        {
            tot += n;
            pos++;
        }
    }
    
    printf("%.0lf valores positivos\n", pos);
    printf("%.1lf\n", tot/pos);
    
    return 0;
}