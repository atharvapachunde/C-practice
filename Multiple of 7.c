#include<stdio.h>
// Multiples of 7
int main(){
    
    int n;
    
    do{
        printf("ENTER NUMBER: ");
        scanf("%d", &n);
        printf("%d\n", n);
        
        if(n % 7 == 0){
            
            break;
        }
    } while(1);
    
    printf("THANKYOU");
    
    return 0;
}
