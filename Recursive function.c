#include<stdio.h>

void PrintHW( int count);

int main(){
   PrintHW (5);
    return 0;
}
//recursive Function
void PrintHW(int count){
    if (count == 0){
        return;
    }
    printf("Hello WOrld\n");
    PrintHW(count -1);
}
