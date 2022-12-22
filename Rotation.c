#include<stdio.h>
int main(){
    int t,l;
    scanf("%d",&t);
    for(l=0;l<t;l++){
        int n,k,i,s=0,p=0;
        scanf("%d%d",&n,&k);
        int a[n],b[n];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            b[i]=a[i];
        }
        
        while(k!=0){
            int t=b[n-1];
            //printf("%d",b[n-1]);
            for(i=0;i<n-1;i++){
                a[i+1]=b[i];
                //printf("%d*%d",a[i],b[i]);
            }
            a[0]=t;
           // b[]=t;
           for(i=0;i<n;i++){
               b[i]=a[i];
              // printf("%d ",b[i]);
           }
          // printf("
");
            k-=1;
            
        }
        for(i=0;i<n;i++){
            if(i!=n-1){
           printf("%d ",a[i]);}
           else{
               printf("%d",a[i]);
           }
        }
        //printf("%d",k);
        printf("
");
    }
}