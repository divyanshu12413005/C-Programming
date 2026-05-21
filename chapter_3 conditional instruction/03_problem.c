#include<stdio.h>
int main (){
int y;
printf("Enter the year:\n");
scanf("%d",&y);
if (y%4==0 && y%100 !=0 || y%400==0){
    printf("Then it is leep year\n");
}
else {
    printf("Not a leep year\n");
}
printf("\nThank You");
    return 0;
}