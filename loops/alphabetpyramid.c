#include<stdio.h>
int main(){
        int n;
    printf("enter the number of lines=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
     printf("%c",j+64); 
     }
     printf("\n");
    }
    return 0;
}