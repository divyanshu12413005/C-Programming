#include<stdio.h>
#include<string.h>
int main(){
    char s1[30];
    gets(s1);
    char s2[20];
    gets(s2);
    strcat(s1 , s2);
    printf("%s",s1);

    return 0;
}