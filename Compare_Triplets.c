#include<stdio.h>
int main()
{
    int i,a[3],j,b[3];
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
         scanf("%d",&b[i]);
    }
    int c=0,s=0;
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            c++;
        }
        else if(b[i]>a[i])
        {
            s++;
        }
    }
    printf("%d %d",c,s);
}