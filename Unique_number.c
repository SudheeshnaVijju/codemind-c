#include<stdio.h>
int main()
{
    int d,n,j,t,a[100],s=0;
    scanf("%d",&n);
    int i=0;
    while(n)
    {   
        d=n%10;
        n=n/10;
        a[i]=d;
        i++;
    }
    for(j=0;j<i;j++)
    {
        int c=0;
        for(int k=0;k<i;k++)
        {
            if(a[j]==a[k])
            {
                c++;
            }
        }
        if(c>1)
        {
            s++;
        }
    }
    if(s==0)
    {
        printf("Unique Number");
    }
    else
    printf("Not Unique Number");
            
    
}