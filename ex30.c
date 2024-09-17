#include <stdio.h>
int main()
{
    int value1, value2, i, k, j, l, fatl = 1, fatj = 1, fatk = 1, m, fatm = 1;
    scanf("%d%d", &value1, &value2);
    for (i = value1; i <= value2; i++)
    {
        for (k = 0; k <= i; k++)
        {   fatm = 1;
            for (m = i; m > 0; m--)
            {
                fatm *= m;
            }
            fatj = 1;
            for (j = 1; j <= k; j++)
            {
                fatj *= j;
            }
            fatl = 1; 
            for (l = 1; l <= i - k; l++)
            {
                fatl *= l;
            }

            fatk = fatj * fatl;

            printf("%d", fatm / fatk);
            if (k >= 0 && k < i)
                printf(",");

        }

        printf("\n");
    }
    return 0;
}