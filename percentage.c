#include<stdio.h>
#include<math.h>
int main(){
    float phy,chem,math,eng,hin,per;
    printf("phy=");
    scanf("%f",&phy);
    printf("chem=");
    scanf("%f",&chem);
    printf("math");
    scanf("%f",&math);
    printf("eng");
    scanf("%f",&eng);
    printf("hin");
    scanf("%f",&hin);
    per=phy+chem+math+eng+hin/5;
    printf("percentage=%f",per);

    return 0;
}