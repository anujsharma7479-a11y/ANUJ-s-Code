#include <stdio.h>

int main()
{// print factorial of n 
    int n;
    printf("enter a number :");
    scanf("%d", &n);

    int fact=1;
    for (int i = 1; i<=n; i++)
    {
        fact=fact * i;
    }printf(" final factorial is %d ",fact);
    
    
    return 0;
}