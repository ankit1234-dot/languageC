#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter the number=");
    scanf("%d",&n);
    int a=0;
      int b=1;
    for(i=1;i<=n-2;i++){
      sum=a+b;
      a=b;
      b=sum;
       printf("fibbonaci of %d is=%d\n ",i,sum);
    }
    //printf("sum=%d\n ",sum);
    return 0;
}