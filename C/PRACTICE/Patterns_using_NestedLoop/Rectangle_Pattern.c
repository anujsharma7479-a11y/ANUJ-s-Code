#include <stdio.h>

int main() 
// rectangle (*) pattern using nested loop 
{   int row , column;
    // ask user for input
    printf("Enter Row = ");
    scanf("%d",& row);
    printf("Enter Column = ");
    scanf("%d",& column);
    
    for ( int i = 1; i <= row; i++)
    {
        for ( int j = 1; j <= column; j++)
        {
            printf(" *");
        }
        printf(" \n");
        
    }
    return 0;
}
