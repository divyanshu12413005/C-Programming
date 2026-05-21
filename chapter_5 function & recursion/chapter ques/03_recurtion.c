#include<stdio.h>
int factorial(int);


int factorial(int n){
if(n== 1|| n==0){
    return 1;

}
return factorial(n-1)*n;

}
int main(){

    int n;
    scanf("%d",&n);
    printf("The factorial of %d is: %d",n,factorial(n));
    return 0;
}