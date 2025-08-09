#include<stdio.h>
int main(){
    int i;
    
    float a=100;
    for(i=1;a>0;i++){
        printf("%f\n",a);
        a=a/2;
    }
    return 0;
}