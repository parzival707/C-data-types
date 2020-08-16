#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int main() {

    typedef struct {
        char name[10];
        int age;
    }person;

    person p1 = { .name = "Emran"  ,.age = 20};
    printf("name: %s, age: %d", p1.name, p1.age);
    return 0;
}
