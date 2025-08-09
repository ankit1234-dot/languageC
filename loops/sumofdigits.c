#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int sum=0;
    int lastdigit;
    while(n>0){
        lastdigit=n%10;
        sum=sum+lastdigit;
         n=n/10;
    }
    printf("the sum of the digits=%d",sum);
    return 0;
}