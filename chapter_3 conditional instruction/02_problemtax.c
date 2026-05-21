#include<stdio.h>
int main(){
    int r;
    float A;
    printf("Enter the amount:");
    scanf("%d",&r);
    if (r<=250000){
    
        printf("No Tax should be applied:");
    }
    else if (r>250000 && r<=500000 ){
        A = (r-250000)*0.05;
        printf("Tax should be:%f",A);
    }
     else if (r>500000 && r<=1000000){
        A = (500000-250000)*0.2 + (r-500000)*0.05;
        printf("Tax should be:%f",A);
    }
    else {
        A = (500000-250000)*0.05 + (1000000-500000)*0.2 + (r-1000000)*0.3;
        
        printf("Tax should be: %f",A);
    }

    
    return 0;

}