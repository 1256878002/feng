#include<stdio.h>
#define LEN 5
int main(void)
{

int a[LEN]={0},i,max;
printf("Enter a:\n");
for(i=0;i<LEN;i++)
{
scanf("%d",&a[i]);
}

max=a[0];
for(i=1;i<LEN;i++)
{
    if(a[i]>max){
        max=a[i];
    }
}
    printf("%5d\n",max);

return 0;
}