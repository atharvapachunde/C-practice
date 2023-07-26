#include<stdio.h>

int fact (int n);

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("factorial of given Number is %d", fact(n));
    return 0;
    
    
}

int fact (int n){
    if (n==1){
        return 1;
    }
    
    int factM1 = fact(n-1);
    int fact = factM1*n;
    return fact;
}
