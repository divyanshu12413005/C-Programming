#include<stdio.h>
#include<math.h>
int main(){
    int p,r,t,n;
    printf("Enter the value of p:\n");
    scanf("%d",&p);
     printf("Enter the value of r:\n");
    scanf("%d",&r);
     printf("Enter the value of t:\n");
    scanf("%d",&t);
     printf("Enter the value of n:\n");
    scanf("%d",&n);
    float S = p*r*t/100;
    float C = (p* pow((1 + r/n),n*t));
    printf("Value of simple interest: %f\n",S);
    printf("Value of compound interst: %f",C);
    return 0;
}