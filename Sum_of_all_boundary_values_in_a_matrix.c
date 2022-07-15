#include<stdio.h>
int main()
{
    int i,j,r,c,s=0;
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
            if(i==0 or i==r-1 or j==0 or j==c-1)
            {
                s+=a[i][j];
            }
        }
    }
    printf("%d",s);
}