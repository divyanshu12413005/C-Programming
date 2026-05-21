#include<stdio.h>
int main(){
int n;
int i=1;
printf("Enter the value of n:");
scanf("%d",&n);
do{
    printf("First n natural numbers:%d\n",i);
    i++;
}while (i<=n);




    return 0;

}