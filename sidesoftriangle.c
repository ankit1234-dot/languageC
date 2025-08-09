#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter sides a=");
    scanf("%d",&a);
    printf("enter a sidesb=");
    scanf("%d",&b);
    printf("enter a sidesc=");
    scanf("%d",&c);
    if(a+b>c&&b+c>a&&c+a>b){
        printf("sides of triangle");
    } else{
        printf("not a trianle");
    }
    return 0;
}