#include<stdio.h>
int main(){
int a;
printf("Enter the value of a:");
scanf("%d",&a);
switch (a){
    case 1:
    printf("you enter the 2\n");
    break;
     case 2:
    printf("you enter the 5\n");
     break;
     case 3:
    printf("you enter the 6\n");
     break;
     case 4:
    printf("you enter the 4\n");
     break;
     default:
     printf("Nothing matched");
}

    return 0;
}