
#include<stdio.h>
int main()
{
    int n,arr[100],i,c,s,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    { 
        c=0;
        s=0;
        if(i%2!=0)
        {
            c++;
            if(arr[i]%2!=0)
            {
                s++;
            }
        }
        else if(i%2==0)
        {
            k=0;
            if(arr[i]%2!=0)
            {
                k++;
            }
        }
        
    }
    if(c==s && k==0)
    {
        printf("True");
    }
    else if(k>0)
    {
        printf("False");
    }
}
