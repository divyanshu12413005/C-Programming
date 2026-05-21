#include<stdio.h>
int main(){
char A;
printf("Enter the character:");
scanf("%c",&A);
if(A>=97 && A<=122){
    printf("Then it is lower case character: %d",A);
}
    else{
        printf("NOt a lower case character\n value of character is: %d",A);
    }


    return 0;
}