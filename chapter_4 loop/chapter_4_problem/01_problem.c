#include<stdio.h>
int main(){
int n;
printf("Enter the value of n:");
scanf("%d",&n);
for (int i =1; i <=10; i++)
{
    printf("%dX%d=%d\n",n,i, n*i);
}


    return 0;
}