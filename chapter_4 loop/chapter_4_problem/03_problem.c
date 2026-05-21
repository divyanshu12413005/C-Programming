#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
int i=1;
int sum;
while (i<=n)
{
   sum +=i;
    i++;
}
//do{
// sum+=i;
// i++;
// }
// while(i<=n);
//
//for(int i = 1; i<=n; i++){
//sum+=i;


    printf("The sum of first 'n' natural numbers is:%d",sum);



    return 0;
}