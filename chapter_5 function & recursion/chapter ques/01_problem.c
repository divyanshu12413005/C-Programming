#include<stdio.h>
// function prototype

int sum(int,int);

// function definition

int sum(int x, int y){
    printf("The sum is:%d\n",x+y);
    return x+y;
}
int main(){
int a=2;
int b=5;


sum (a,b); // sum call

int a1=3;
int b1=4;
sum(a1,b1);

int a2=5;
int b2=6;
sum(a2,b2);





    return 0;
}