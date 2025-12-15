#include<stdio.h>
// sum of two number using function.

int sum(int a,int b); // Function decleration


int main()
{
    printf("Enter number a : ");
    scanf("%d",&a);
    printf("Enter number b : ");
    scanf("%d",&b);

    int s=sum(int a,int b);
    printf("Sum is : %d",s); 
return 0;
}

int sum(int a,int b){
    return a + b;   
}