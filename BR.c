#include<stdio.h>

int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    
    for(int i=1; i<=10; i++){
        if(i==3){
            break;
        }
        
        printf("%d\n", i);
    }
    return 0;
}
