#include <stdio.h>

int main(void)
{
    int n;
    int m=1;
    int k=1;
    int g;

    printf("Enter n:\n");
    scanf("%d", &n);
    printf("%8d%8d",m,k);
    for (int i = 3; i <= n; i++)
    {
        g=m+k;
        m=k;
        k=g;
        printf("%8d",g);
        if(i%5==0){
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}