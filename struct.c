#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 struct student{
    int roll;
    int age;
 };
 int main(){
   struct student s1;
   s1.roll = 36;
   s1.age = 20;
   printf("Roll : %d \nAge : %d ",s1.roll,s1.age);
 return 0;
 }
