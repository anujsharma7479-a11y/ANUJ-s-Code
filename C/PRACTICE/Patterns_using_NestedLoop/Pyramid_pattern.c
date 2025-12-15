#include <stdio.h>

int main()
{   int space , row ;
    printf("Enter Rows =");
    scanf("%d",&row);

    for (int i = 1; i <=row; i++)
    {   // leading space 
        for (int space = 1; space <= row -i; space++)
        {
            printf(" ");
        }
        for (int j = 1; j <=2*i-1; j++)//print star with a space 
        {
            printf("*");
        }printf("\n");
        
        
    }
     return 0;
}