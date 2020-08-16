#include<stdio.h>
#include<stdlib.h>
 int main(){
   int a = 5;
   int i;
   for(i = 1 ; i <= 5 ; i++){
        if(i==1)
            continue;
        if(i== 5)
            break;
        printf("%d ", i);
   }
   return 0;
 }

