#include<stdio.h>
int main()
{
    //print the sum of first n natural number (using for loop)
    int n;
    printf("Enter number:");
    scanf("%d", &n);
     
    int sum=0;
     for ( int i=1; i<=n; i++)
     {
        sum = sum + i;
     }
     printf("sum of the first n natural nos is: %d \n ",sum);
     printf("Reverse nos are: ");

     // print the numbers in reverse also 
     for (int i=n; i>=1; i--)
     {
        printf(" %d",i);
     }
     
}