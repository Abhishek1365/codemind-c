#include<stdio.h>
int main(){
    int m,n,sum=0,y=0;
    scanf("%d %d",&m,&n);
    for(int i=1;i<=m;i++){
       if(m%i==0)
        sum=sum+i;
    }
    for(int j=1;j<=n;j++){
       if(n%j==0)
        y=y+j;
    }
    if(sum==y && y==sum ) printf("Amicable");
    else printf("Not Amicable");
}