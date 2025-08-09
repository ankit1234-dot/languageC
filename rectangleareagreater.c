#include<stdio.h>
int main(){
    int l,b;
    printf("enter length");
    scanf("%d",&l);
    printf("enter breath");
    scanf("%d",&b);
    int a=l*b;
    int p=2*(l+b);
    if(a>p){
        printf("Area is greter than perimeter");
    }
    else{
        printf("perimeter is greater than area");
    }

    return 0;
}