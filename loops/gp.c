#include<stdio.h>
int main(){
    int i,n;
    printf("enter the number of terms=");
    scanf("%d",&n);
    int a=1;
    for(i=1;i<=n;i++){
        printf("%d ",a);
        a=a*2;
    }
    return 0;}