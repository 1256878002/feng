#include <stdio.h>

int main(void)
{
    int n, i, sum=0;
    printf("Enter n:\n");
    scanf("%d", &n);
    while (n>0)
    {
        i = n % 10;
        n = n / 10;
        sum = sum + i;
    }
    printf("sum is %d", sum);
    return 0;
}