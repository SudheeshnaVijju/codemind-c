#include<stdio.h>
int main()
{
    int n,i;
    float sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+((float)1/i);
    }
    printf("%.2f",sum);
    return 0;
}