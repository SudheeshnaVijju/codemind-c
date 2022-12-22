#include<stdio.h>
#include<math.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int a[n],c=0,p=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(i%2==0){
        c+=a[i];}
        else{
        p+=a[i];}
    }
    //printf("%d %d",c,p);
    if(abs(p-c)%4==0){
        printf("X");
    }
    else{
        printf("Y");
    }
    
}