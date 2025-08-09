#include<stdio.h>
int main(){
    int a,b;
    printf("enter the base=");
    scanf("%d",&a);
    printf("enter the power=");
    scanf("%d",&b);
    int power=1;
    for(int i=1;i<=b;i++){
        power=power*a;
     printf("%d raised to the power%d=%d\n",a,i,power);   
    }
    //printf("%d raised to the power%d=%d",a,b,power);
    return 0;
}