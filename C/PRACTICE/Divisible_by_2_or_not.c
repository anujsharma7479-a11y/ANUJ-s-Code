#include<stdio.h>
int main()
{
    // WRITE A PROGRAM WHICH IS DIVISIBLE BY 2 OR NOT 
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if (x%2==0)
    {
         printf("it is divisible by 2");
    }
    else {
        printf("it is not divisible by 2");
    }
    return 0;
}