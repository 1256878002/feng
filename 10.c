#include <stdio.h>
#define LEN 5
int main(void)
{

    int a[LEN] = {0}, i, max, temp;
    printf("Enter a:\n");
    for (i = 0; i < LEN; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, LEN);
    for (i = 0; i < LEN; i++)
    {
        printf("%5d\n", a[i]);

       
    }
    return 0;
}
    void sort(int x[], int n)
    {
        int m, i, tmp;
        for (i = 0; i < n - 1; i++)
        {

            for (m = i + 1; m < n; m++)
            {
                if (x[m] > x[i])
                {
                    tmp = x[m];
                    x[m] = x[i];
                    x[i] = tmp;
                }
            }
        }
    }