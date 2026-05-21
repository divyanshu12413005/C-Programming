#include<stdio.h>
int main(){
    char ch;
    FILE *ptr;
    ptr=fopen("Divyanshu4.txt","r");
    while (1)
    {
        ch=fgetc(ptr);
        printf("%C",ch);
        if(ch==EOF){
            break;
        }

    }
    
    return 0;
}