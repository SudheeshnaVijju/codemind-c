#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    float s,ar;
    s=float(a+b+c)/2;
    ar=(sqrt(s*(s-a)*(s-b)*(s-c)));
    printf("%.2f",ar);
}