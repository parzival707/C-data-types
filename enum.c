#include<stdio.h>
#include<stdlib.h>

 enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};
 int main(){

 	enum week day;
 	day = Wed;  // here Wed is in the 2 index inside of  the enum
 	printf("%d",day); // it will print 2

    return 0;
 }

