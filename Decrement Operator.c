#include<stdio.h>

int main(){
    int i=12;
    printf("%d\n", i--);//post decrement
    printf("%d\n\n\n\n", i);
    other();
    return 0;
}

 other(){
    int j=12;
    printf("%d\n", --j); //pre decrement
    printf("%d\n", --j);
}
