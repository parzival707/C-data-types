#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 union numbers{
    int num;
 };
 int main(){
   union numbers n1;
   n1.num =45;
   printf("Number1 : %d",n1.num);
 return 0;
 }
