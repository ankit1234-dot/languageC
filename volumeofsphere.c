#include<stdio.h>
#include<math.h>
int main()
{
    float r,v;
    printf("r=");
    scanf("%f",&r);
    v=4*3.14*r*r*r/3;
    printf("The volume of=%f",v);
    return 0;
}