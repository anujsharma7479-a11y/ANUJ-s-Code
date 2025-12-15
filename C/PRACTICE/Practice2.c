#include<stdio.h>
int main()
{
    // Write a program to check if a student passed or failed
    float marks;
    printf("Enter marks of the student : ");
    scanf("%f", &marks);
    if (marks>=30 && marks<100)
    { 
      printf("PASS");
    }
    else if (marks<=30 && marks>=0)
    {
        printf("FAIL");
    }
    else{
        printf("invalid data ");
    }
    
    return 0;
}