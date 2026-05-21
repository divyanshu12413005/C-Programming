#include<stdio.h>
int main() {
   int c;
   printf("Enter the value of c:");
   scanf("%d",&c);
   float F = ((9.0/5.0)*c) + 32;
   printf("Value in fehrnit:");
   printf("%f",F); 
    return  0;
}