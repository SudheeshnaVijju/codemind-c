#include<stdio.h>
int fun(int n){
    int s=0;
    while(n){
        s=(s*10)+(n%10);
        n/=10;
    }
    return s;
}
int pan(int n){
    int s=0,t=n,d;
    while(n!=0){
        d=n%10;
        s=(s*10)+d;
        n=n/10;
    }
    if(t==s){
        return 1;
    }
    return 0;
}
int main(){
    int i=0,n;
    scanf("%d",&n);
    while(1){
        n+=fun(n);
        if(pan(n)==1){
            break;
        }
    }
    printf("%d",n);
}