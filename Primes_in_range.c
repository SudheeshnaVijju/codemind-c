#include<stdio.h>
#include<math.h>
int fun(int n){
    int i;
    if(n==1){return 0;}
    for(i=2;i<int(sqrt(n))+1;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int i,n,m,c=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=n;i<=m;i++){
        if(fun(i)==1){
            c+=1;
        }
    }
    printf("%d",c);
}