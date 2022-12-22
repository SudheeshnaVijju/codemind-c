#include<stdio.h>
int main(){
    int i,j,k,m=0,n;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(i=0;i<n;i++){
        c[i]=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        k=0;
        for(j=0;j<n;j++)
        {
            if(a[j]==a[i])
            {
                k+=1;
               // a[i]=-1;
            }
            
        }
        //printf("%d",k);
        if(k==a[i])
        {
            b[m++]=a[i];
        }
    }
    float s=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(b[i]==c[j]){
                s+=1;
            }
        }
        if(s==0){
            c[i]=b[i];
        }
        else{
            continue;
        }
    }
    s=0;
    int l=0;
    for(i=0;i<n;i++){
        if(c[i]!=0){
            l++;
        }
        s+=c[i];
    }
    if(l!=0){
        printf("%.2f",s/l);}
    else{
        printf("-1");
    }
}