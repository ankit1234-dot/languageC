#include<stdio.h>
int main(){
    int n,a=0;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=2;i<=n-1;i++){
    if(n%i==0){
   // printf("the given no. is composite");
   a=1;
    break;}
    }
    if(n==1) printf("it is neither prime nor composite");
    if(a==0) printf("the given number is prime number\n");
    else printf("the given number is composite number");
    return 0;
}
