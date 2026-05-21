#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int product =1;
    for (int i = 1; i <=n; i++)
    {
        product *=i;
    }
    //using while loop
    // int i = 1;
    // int product=1;
    //while (i<=n)
    //{
      // product*=i;
       //i++; 
    //}
    
    
    printf("Factorial of n is:%d",product);
    




    return 0;
}