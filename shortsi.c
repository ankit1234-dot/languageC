#include<stdio.h>
int main()
{
    float p,r,t,si;
    printf(" enter the value of p,q,r");
    scanf("%f%f%f",&p,&r,&t);
    si=p*r*t/100;
    printf("simple interest=%f",si);
    return 0;
}