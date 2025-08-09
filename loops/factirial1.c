#include<stdio.h>
int main(){
    int n,i,fact=1;
    printf("entr the number=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       fact=fact*i;
       printf("factorial of %d is=%d\n",i,fact);
    }
   // for(i=n;i>=1;i--){
    //    fact=fact*i;
   // printf("factorial=%d\n",fact);
   // }
    return 0;
}