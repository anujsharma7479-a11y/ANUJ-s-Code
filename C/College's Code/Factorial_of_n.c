#include<stdio.h>

int fact(int n);

int main()
{ int n;
    printf("Factorial of is : %d",fact(5));
return 0;
}
int fact(int n){
if (n == 0)
{
    return 1;
}

int factNM1=fact(n-1);
int factN=factNM1 * n;
return factN;
}