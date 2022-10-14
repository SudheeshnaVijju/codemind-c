#include<stdio.h>
#include<string.h>
int main()
{
    char arr[1000];
    int i,j,c,f=0;
    scanf("%[^
]",arr);
    int n=strlen(arr);
    for(i=0;i<n;i++)
    {
        c=1;
        if(arr[i]=='0')
            continue;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                arr[j]='0';
                
            }
        }
        if(c==1)
        {
            f++;
        }
    }
    if(f==n)
    printf("True");
    else
    printf("False");
}