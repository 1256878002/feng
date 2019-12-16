#include <stdio.h>
#define LEN 5
int main(void)
{

    int a[LEN] = {0}, i, max;
    printf("Enter a:\n");
    for (i = 0; i < LEN; i++)
    {
        scanf("%d", &a[i]);
    }
    max = findMax(a, LEN);
    printf("%5d\n", max);
    return 0;
}

int findMax(int x[], int n)
{
    int m, i;
    m = x[0];
    for (i = 1; i < n; i++)
    {
        if (x[i] > m)
        {
            m = x[i];
        }
    }
    return m;
}