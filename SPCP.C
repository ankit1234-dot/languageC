#include<stdio.h>
int main()
{
    int sp,cp;
    printf("cost price of product");
    scanf("%d",&cp);
    printf("selling price of product");
    scanf("%d",&sp);
    if(sp>cp){
        printf("profit");
    }
    if(sp<cp){
        printf("loss");
    }
    if(sp=cp){
        printf("no profit,no loss");
    }
    return 0;
}