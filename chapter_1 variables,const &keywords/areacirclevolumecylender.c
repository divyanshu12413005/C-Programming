#include<stdio.h>
int main() {
    int r;
    int h;
    printf("Enter the value of r:");
    scanf("%d",&r);
     printf("Enter the value of h:");
    scanf("%d",&h);
    float A = 3.14*r*r;
    float V = 3.14*r*r*h;
    printf("Area of the circle:");
    printf("%f\n",A);
      printf("volume of the cylender:");
    printf("%f",V);

    return 0;
}