#include<stdio.h>
int main(){
int a,b,c,d;
printf("Enter the value of a:\n");
scanf("%d",&a);
printf("Enter the value of b:\n");
scanf("%d",&b);
printf("Enter the value of c:\n");
scanf("%d",&c);
printf("Enter the value of d:");
scanf("%d",&d);
if(a>b && a>c && a>d){
    printf("a is greater\n");
}

else if(b>c && b>a && b>d){
    printf("b is greater\n");
}

else if(c>d && c>a && c>b){
    printf("c is greater\n");
}
else {
    printf("d is greater");
}



    return 0;
}