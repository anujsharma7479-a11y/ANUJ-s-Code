#include <stdio.h>

int main()
{// calculate the sum of all numbers b/w 5 and 50 
    int sum=0;
    for (int  i = 5; i <= 50; i++)
    {
        sum=sum+i;
    }
    printf("Sum of number b/w 5 & 50 is = %d" ,sum);
    
    return 0;
}