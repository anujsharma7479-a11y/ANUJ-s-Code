#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    if (n>=0)
    {
        printf("%d",n);
    }
    else n=-n;
    {
        printf("the absolute value is = %d",n);
    }
    
}