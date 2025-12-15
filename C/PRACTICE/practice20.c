#include <stdio.h>

int main()
{// print all the odd numbers from 5 to 50
    for (int i = 5; i <=50; i++)
    {
        if (i%2!=0)//odd
        {
            printf(" %d ",i );
        }
        
    }
    
    return 0;
}