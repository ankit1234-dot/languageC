#include<stdio.h>
#include<math.h>
int main(){
float x1,y1,x2,y2,x3,y3;
printf("enter the number x1=");
scanf("%f",&x1);
printf("enter the number y1=");
scanf("%f",&y1);
printf("enter the number x2=");
scanf("%f",&x2);
printf("enter the number y2=");
scanf("%f",&y2);
printf("enter the number x3=");
scanf("%f",&x3);
printf("enter the number y3=");
scanf("%f",&y3);
float m1,m2;
m1=(y2-y1)/(x2-x1);
m2=(y3-y2)/(x3-x2);
if(m1=m2){
    printf("point lies on straight line");
}else{
    printf("pointnot lies  on straight line");
}
    return 0;
}