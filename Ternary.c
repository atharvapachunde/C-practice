#include<stdio.h>
// Ternary function
int main(){
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    
    (age>=18)? printf("Adult") : printf("Not Adult");
    return 0;
}
