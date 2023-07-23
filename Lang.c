#include<stdio.h>

  void namaste();
  void bonjour();
  
  int main(){
      printf("enter f for french and h for hindi\n");
      char ch;
      scanf("%c", &ch);
      
      if(ch == 'f'){
           bonjour();
      }
      
      if(ch == 'h'){
          namaste();
      }  if (ch!='f' && ch!='h'){
          printf("invalid input");
      }
      
  }
  
  void namaste(){
      printf("Namaste :)\n");
  }
  
  void bonjour(){
      printf("Bonjour :)\n");
  }
