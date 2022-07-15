#include<stdio.h>
int main()
{
    int i,j,r,c,s=0,p=0;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i%2==0)
            {
                s+=a[i][j];
            }
            else
            {
                p+=a[i][j];
            }
        }
    }
    printf("%d %d",s,p);
}