#include<stdio.h>
int main(){
   int age;
   printf("Enter the value of age:");
   scanf("%d",&age);
   if (age>65){
    printf("you are eligble for driving and you are senoir citizen\n");
   }
    else if (age>45){
        printf("you are eligble for driving and you are elder\n");

   }
   else if (age>18){
    printf("you are eligble only for driving\n");
   }
   else {
    printf("you are not eligble for driving");
   }

   


    return 0;
}