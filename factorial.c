#include<stdio.h>
int main(){
            int n;
            printf("Enter the number to calculate its factorial:\n");
            scanf("%d", &n);
            printf("The factorial of %d is %d", n, fact(n));
            return 0;
          }
int fact(n){
            if(n==1)
            return 1;
            else
            return n*fact(n-1);
           }
