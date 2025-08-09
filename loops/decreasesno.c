#include<stdio.h>
int main(){
    int i;
    int a=100;
    for(i=4;a>0;i=i+3){
        printf("%d ",a);
        a=a-3;
    }
    return 0;
}