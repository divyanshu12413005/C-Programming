#include<stdio.h>
int main() {
    int a;
    printf("Enter the value of a:");
    scanf("%d",a);
    printf("The number is divisible by a%97 is %d",a%97);
    return 0;
}