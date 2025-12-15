#include <stdio.h>

int main()
{// print reverse of a table of number n 
    int n;
    printf("enter the number:");
    scanf("%d", &n);
    printf("reverse table of %d is :- ",n);
    for (int i = 10; i>=1; i--)
    { 
        printf(" %d ", n*i);
    }
    
    return 0;
} 