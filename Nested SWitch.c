#include<stdio.h>
//Nested Switch
int main(){
    int number;
    printf("Enter number: ");
    scanf("%d",&number);
    
    if (number>=0){
        printf("Positive\n");
        if (number%2==0){
            printf("Even");
        } else{
            printf("Odd");
        }
    } else{
        printf("Negative\n");
    }
}
