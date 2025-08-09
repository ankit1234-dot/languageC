#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int oddsum=0;
    for(int i=1;i<=n;i=i+2){
        oddsum=oddsum+i;
    }
    int evensum=0;
    for(int i=2;i<=n;i=i+2){
        evensum=evensum+i;
    }
    int sum=0;
    sum=oddsum-evensum;
    printf("the sum of seies=%d",sum);

    return 0;
}