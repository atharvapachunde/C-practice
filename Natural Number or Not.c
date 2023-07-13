#include<stdio.h>
//
int main(){
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);
    
    if(number>=1){
        printf("Natural Number");
    } else if(number<1 && number>='a' && number>='Z'){
        printf("Not a Natural Number");
    } else {
        printf("Not a number");
    }
    
}
