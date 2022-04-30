#include<stdio.h>
#include<string.h>
int main()
{
    int n=0,i;
    char s[100];
    scanf("%[^
]c",&s);
    for(i=0;i<strlen(s);i++)
    {
         if(s[i]==' ')
        {
            n++;
        }
    }
    printf("%d",n+1);
}