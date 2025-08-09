#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int r=0;
    while(n>0){
         r=r*10;
        r=r+(n%10);
         n=n/10;
    }
     int sum=0;
    sum=(n+r);
   // printf("the reverse of the number=%d\n",r);
    
    printf("the sum of number and its reverse=%d\n",sum);
    return 0;
} 