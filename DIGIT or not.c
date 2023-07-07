#include<stdio.h>

int main (){
    char ch;
    printf("enter a character: ");
    scanf("%c", &ch);
    
    if (ch>='0' && ch<='9'){
        
        printf("%c is a digit", ch);
    }
    else {
        
        printf("%c is NOT a digit");
    }
    return 0;
    
}
