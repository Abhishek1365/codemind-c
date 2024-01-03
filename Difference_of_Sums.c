#include<stdio.h>
int main(){
    int x,sum=0,y=0;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        sum=sum+i*i;
        y=y+i;
            }
            printf("%d",y*y-sum);
            
        
}