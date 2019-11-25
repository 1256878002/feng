#include <stdio.h>

int main(void)
{
    int i, a, b, c;
    for (i = 100; i < 1000; i++)
    {
        a = i%10;
        b =(i%100-i%10)/10;
        c=i/100;
        if (i == a * a * a + b * b * b + c * c * c)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}