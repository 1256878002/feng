#include <stdio.h>

int main(void)
{
    int n , fac = 1;
    double e = 0 ;
    printf("Enter n:\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
        e = e + 1.0 / fac;
    }
    printf("e=%.5lf\n", e);

    return 0;
}