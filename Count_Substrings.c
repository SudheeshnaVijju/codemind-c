#include<stdio.h>
int main(){
    int o,t;
    scanf("%d",&t);
    for(o=0;o<t;o++){
        int n,i,j,c=0;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        for(i=0;i<n;i++){
            if(s[i]=='1'){
            for(j=n-1;j>=i;j--){
                if(s[j]=='1'){
                c+=1;}
            }}
        }
        printf("%d",c);
        printf("
");
    }
}