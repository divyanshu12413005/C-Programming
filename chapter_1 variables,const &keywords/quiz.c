#include<stdio.h>
int main() {
    /*
    Quiz: write a program to find grade of a students given his marks based on below:

     90 - 100 => A
     80 - 90 => B
     70 - 80 => C
     60 - 70 => D
     50 - 60 => E
     <50 => F
     */
    
    int marks;
    char grade;
    printf("Enter the marks:");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
    {
        printf("Wrong Entry");
    }
    else if (marks<=100 && marks>=90){
        printf("grade is: %c",grade = 'A');
    }
   else if (marks<=90 && marks>=80){
        printf("grade is: %c",grade = 'B');
    }
    else if (marks<=80 && marks>=70){
         printf("grade is: %c",grade = 'C');
        
        

    }
    else if (marks<=70 && marks>=60){
         printf("grade is: %c",grade = 'D');
    }
    else if (marks<=60 && marks>=50){
         printf("grade is: %c",grade = 'E');
    }
    else {
        printf("grade is: %c",grade = 'F');
    }


    return 0;
}