#include<stdio.h>

int sum (int n);

int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    printf("\nSum of 1 to given number: %d", sum(n));
    return 0;
}

int sum (int n){
    if (n==1){
        return 1;
    }
     
     int sumNm1 = sum(n-1);
     int sumN = sumNm1 + n;
     return sumN;
}
