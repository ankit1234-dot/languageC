#include<stdio.h>
void main(){
    int x,a,b;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    //x=a+b;
    //x=x%10*100+x/10;
    //x=x/1000+x%10;
    //printf("x=%d",x);
return 0;
}