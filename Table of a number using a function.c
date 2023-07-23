#include<stdio.h>

void printTable(int n);

int main(){
    
    int n;
    printf("ENTER A NUMBER: ");
    scanf("%d", &n);
    
    printTable(n);//argument
    
    return 0;
}

void printTable(int n){//parameter
    for(int i=1; i<=10; i++){
        printf("%d\n", i*n);
    }
}
