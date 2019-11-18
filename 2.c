#include <stdio.h>

int main(void)
{
    int n;
    int sum = 0;
    int v = 1;

    printf("Enter n:\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        v = i * v;
        sum = sum + v;
    }
    printf("%d", sum);
    return 0;
}