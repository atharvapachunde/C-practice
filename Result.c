#include<stdio.h>
// program to check if a student passed or failed
int main(){
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    
    if (marks>30 && marks<=100){
        
        printf("PASS");
    } else if (marks>=0 && marks<=30){
        
        printf("FAIL");
    } else{
        printf("Wrong marks");
    }
}
