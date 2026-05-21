#include<stdio.h>
float average(int,int,int);  //average of three numbers
float average(int a,int b,int c){
    return (a+b+c)/3.0;

}
int main(){
    int d,e,f;
    scanf("%d%d%d",&d,&e,&f);
    printf("%f",average(d,e,f));
    return 0;
}