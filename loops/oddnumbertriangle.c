#include<stdio.h>
int main(){
        int n;
    printf("enter the number of rows=");
    scanf("%d",&n);
    int a=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
            a=a+2;
        }
        printf("\n");
    }
    return 0;
}