#include <stdio.h>
int main()
{
    int age;
    int lucky_number = 7;
    printf("Enter age : ");
    scanf("%d", &age);
    // ternary operater used for a simple condition programs
    age >= 18 ? printf("ADULT\n") : printf("NOT ADULT\n");
    age == lucky_number ? printf("you are lucky") : printf("you are not lucky");
}