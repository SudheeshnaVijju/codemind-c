#include<stdio.h>
int main()
{
    int i,x,y,n;
    scanf("%d",&n);
    x=0;
    y=1;
    printf("%d ",x);
    while(n>1)
    {
        i=x;
        x=x+y;
        printf("%d ",x);
        y=i;
        n--;
    }
}