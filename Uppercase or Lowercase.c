#include<stdio.h>

int main(){
    char ch;
    printf("Enter Character: ");
    scanf("%c", &ch);
    
    if(ch>='A' && ch<='Z'){
        printf("UPPERCASE");
    } else if(ch>='a' && ch<='z'){
        printf("lowercase");
    } else{
        printf("Not an alphabet");
    }
}
