#include<stdio.h>
int main()
{
    int i,n,j,a,b,s[100],m=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(s[i]<a || s[i]>b)
        {
            if(m<s[i])
            {
                m=s[i];
                c++;
            }
        }
    }
    
    if(c==0)
    {
        printf("-1");
    }
    else
    {
    printf("%d",m);
    }
}