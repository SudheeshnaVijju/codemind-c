#include<stdio.h>
int main(){
    int o,t;
    scanf("%d",&t);
    for(o=0;o<t;o++){
        int i,n,m,c=0;
        scanf("%d%d",&n,&m);
        for(i=n;i<=m;i++){
            int d=i%10;
            if(d==2 or d==9 or d==3){
                c+=1;
            }
        }
        printf("%d
",c);
    }
}