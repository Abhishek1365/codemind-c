#include<stdio.h>
#include<math.h>
int main(){
    float a,b,y,sum=0;
    scanf("%f %f",&a,&b);
    for(int i=a;i<=b;i++){
        y=sqrt(i);
        sum=sum+y;
    }
    printf("%.2f",sum);
}