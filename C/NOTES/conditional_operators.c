#include <stdio.h>
int main()
{ // if-else statements
    int age;
    printf(" Enter a age : ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("ADULT \n");
    }
    else
    {
        printf("NOT ADULT \n ");
    }

    // else if statement
    printf(" The age is :");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("ADULT\n");
    }
    else if (age >= 13 && age <= 17)
    {
        printf("TEENAGER\n");
    }
    else if (age >= 2 && age <= 12)
    {
        printf("CHILD\n");
    }
    else
    {
        printf("NEW BORN BABY");
    }
    return 0;
}