#include<stdio.h>
int prime_number_btween_range(int );
int prime_number_btween_range(int n ){
    for(int i=2; i*i<=n; i++){
        if(n%i ==0){
            return 0;
        }
    }
        return 1;
    
}
    int main(){
        int a1,a2;
        printf("Enter the starting number:");
        scanf("%d",&a1);
         printf("Enter the ending number:");
        scanf("%d",&a2);
        
        printf("Prime number Btween %d and %d is:",a1,a2);
        for(int i=a1; i<=a2; i++){
            if(prime_number_btween_range(i)){
                printf("%d ",i);
            }
        }
        
       return 0;
    }
