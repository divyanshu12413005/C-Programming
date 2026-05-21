#include<stdio.h>
int main(){
    char str[10];
    for(int i=0; i<9;i++){
        scanf("%c",&str[i]);
        fflush(stdin);

    }
    str[9]='\0';
    printf("%s",str);

    return 0;
}