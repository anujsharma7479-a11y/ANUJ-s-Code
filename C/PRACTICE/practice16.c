#include<stdio.h>
int main ()
{ // TABLE OF ANY NUMBER( using for loop)
    int num;
    printf("Enter number =");
    scanf("%d",&num);
    printf("table of %d is :- ",num);

    for (int i = 1; i <=10; i++)
    {
        printf(" %d, ",num*i);
    } 
    
    
}