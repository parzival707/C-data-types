#include<stdio.h>
#include<stdlib.h>
 int add(int x ,int y);
 int main(){
     int a = 5;
     int b = 6;
     int sum = 0;
     sum = add(a,b);
     printf("Sum of %d and %d is : %d ",a,b,sum);
  return 0;
 }
 int add(int x ,int y){
     return (x+y);

 }

