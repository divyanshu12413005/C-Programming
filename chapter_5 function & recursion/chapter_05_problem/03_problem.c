#include<stdio.h>
float Force(float);
float Force(float mass){
    return mass*9.8;
} 
int main(){
float mass;
scanf("%f",&mass);
printf("%f",Force(mass));

    return 0;
}