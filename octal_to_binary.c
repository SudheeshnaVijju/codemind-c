#include<stdio.h>
#include<math.h>
int main(){
    int o,b,d=0,c=0;
    int a[100];
    scanf("%d",&o);
    while(o){
        d=d+((o%10)*pow(8,c));
        c+=1;
        o/=10;
    }
    int i=0,j=0;
    while(d){
        a[i]=d%2;
        i+=1;
        d/=2;
        //printf("%d ",);
    }
    for(j=i-1;j>=0;j--){
        printf("%d",a[j]);
    }
}