# include<stdio.h>
int main(void)
{
    int a,b,c,d,sum;
    float aver;
    a = 10;
    b = 20;
    c = 30;
    d = 40;
    sum = a+b+c+d;
    aver =sum/4.0f;
    printf("Sum is %d,average is %.1f",sum,aver);
    return 0;
}