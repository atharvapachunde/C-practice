#include<stdio.h>
// finding out the smallest number 
int main(){
    int x,y,z;
    printf("enter x");
    scanf("%d",&x);
    printf("enter y");
    scanf("%d",&y);
    printf("enter z");
    scanf("%d",&z);
    
    
    if (x>y && y>z){
        
        printf("%d", z);
        
    }
    
    else if (z>y){
        
        printf("%d",y);
        
    }
    
    else {
        
        printf("%d", x);
    }
}
