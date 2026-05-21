#include<stdio.h>
#include<string.h>
int main(){
    char st[30];
    gets(st);
    char target[20];
    strcpy(target,st); //target now contains get(st)
    printf("%s %s",st,target);


    return 0;
}