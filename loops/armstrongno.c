#include<stdio.h>
int main(){
    int i=1,a,b,c;
     while(i<=500){
        a=i%10;
        b=b%100;
        b=(b-a)/10;
        c=i/100;
        if((a*a*a)+(b*b*b)+(c*c*c)==i)
        {
            printf("armstrong no.=%d\n");
        }
          i++;
     }

    return 0;
}