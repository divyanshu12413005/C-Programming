#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("Divyanshu3.txt","a");
   // char c=fgetc(ptr);
    //printf("%c",c);
    fputc('c',ptr);
    
    return 0;
}