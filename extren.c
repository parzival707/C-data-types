#include<stdio.h>
#include<stdlib.h>
 extern int a = 45; /// it is used for global variable access
 int main(){
  /* This extren variable act as like a const variable*/
  printf("This is an extern integer : %d" ,a);

  return 0;
 }
