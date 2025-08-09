 #include<stdio.h>
 int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n>80){
        printf("A grade");
    }
    else if(n>70){
        printf("B grade");
    }
    else if(n>60){
        printf("c grade");
    
    }
    else{
        printf("D grade");
    }
    return 0;
 }