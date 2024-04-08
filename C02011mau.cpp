#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = 1; i <= a; i++)
    {
        int j = i;
        int ktra = 0, demsolan = 0;
        while (demsolan < b)
        {
            if (j >= b)
            {
                printf("%d", j);
                ktra = 1;
                demsolan++;
                j--;
                continue;
            }
            if (ktra == 0)
            {
                printf("%d", j);
                j++;
                demsolan++;
                continue;
            }
            if (ktra == 1)
            {
                printf("%d", j);
                j--;
                demsolan++;
                continue;
            }
        }
        printf("\n");
    }
    return 0;
}
