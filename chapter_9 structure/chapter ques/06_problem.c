#include<stdio.h>
#include<string.h>
typedef struct employee{
    int code;
    float salary;
    char name[10];
} Emp;
int main(){
  /* Emp e1;
    e1.code=4511;
    e1.salary=545.44;
    strcpy(e1.name,"Divyanshu");
    printf("%d %f %s",e1.code,e1.salary,e1.name); */

    Emp e1;
    Emp *ptr1=&e1;
     e1.code=4511;
    e1.salary=545.44;
    strcpy(e1.name,"Divyanshu");
     printf("%d %f %s\n",e1.code,e1.salary,e1.name);
      printf("%d %f %s\n",ptr1->code,ptr1->salary,ptr1->name);

    
    return 0;
}