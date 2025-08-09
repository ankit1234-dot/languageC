#include<stdio.h>
int main()
{
    int a,b;//a>b
    printf("enter dividend=");
    scanf("%d",&a);
    printf("enter divisor=");
    scanf("%d",&b);
   // int q=a/b;
    int r;
  //  r=a-b*q;
   r=a%b;
  //  printf("enter remainder when %d divided by %d=%d",a,b,r);
  printf("remainder=%d",r);
  
  
    return 0;
}