#include<stdio.h>
int main(){
        int n;
    printf("enter the number of lines=");
    scanf("%d",&n);
    int a=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a;j++){
            printf(" ");
        }
        a--;
        for(int k=1;k<=n;k++){
            printf("*");
        }
        printf("\n"); 
    }
    return 0;
}