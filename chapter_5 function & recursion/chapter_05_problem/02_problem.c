#include<stdio.h>
float fahernhit(float);
float fahernhit(float celcius){
    return (9.0/5)*celcius+32;
}
int main(){

float celcius;
scanf("%f",&celcius);
printf("%.2f",fahernhit(celcius));

    return 0;
}