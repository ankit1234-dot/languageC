#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter number a=");
    scanf("%d",&a);
    printf("enter a numberb=");
    scanf("%d",&b);
    printf("enter a numberc=");
    scanf("%d",&c);
    if(a>b&&a>c){
        printf("a is greater");
    }
    if(b>a&&b>c)
    {printf("b is greter");}
    if(c>a&&c>b){
        printf("c is greater");
    }
    return 0;
}