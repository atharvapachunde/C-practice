#include<stdio.h>

int main(){
    int i=1;
    printf("%d\n", i++); //pre increment
    printf("%d\n\n\n", i);
    other();
    return 0;
}

int other(){
    int j=1;
    printf("%d\n",++j);//post increment
    printf("%d\n",++j);
    return 0;
}
