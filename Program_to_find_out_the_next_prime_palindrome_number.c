#include<stdio.h>
#include<math.h>
int pan(int n){
    int s=0,t=n;
    while(n){
        s=s*10+(n%10);
        n/=10;
    }
    if(t==s){
        return 1;
    }
    return 0;
}
int fun(int n){
    int i;
    if(n==1){
        return 0;
    }
    for(i=2;i<int(sqrt(n))+1;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    n+=1;
    while(pan(n)==0 or fun(n)==0){
        n+=1;
    }
    printf("%d",n);
}