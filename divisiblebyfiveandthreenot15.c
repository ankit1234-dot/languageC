 #include<stdio.h>
 int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n%5==0||n%3==0){
        if(n%15!=0){
            printf("the number is divisible by 5 and 3 not by 15");
        }
        else{
            printf("the number is  divisible by 5 and 3 also by 15");
        }
    }else{
        printf("the number is divisible by 3,5,15");
    }
    return 0;
 }