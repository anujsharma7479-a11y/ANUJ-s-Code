/* Write a program to check if a given number is armstrong or not:
( Armstrong number is a number that is equal to the sum of the cubes of its digits.
For example, 153 is an Armstrong number because 1^3+ 5^3 + 3^3 = 153)*/
#include<stdio.h>
int main()
{
    int num,remainder,sum=0, original_num;
    printf("Enter number:-");
    scanf("%d", &num);
    original_num = num;
    while (num > 0)
    {
        remainder=num % 10;
        sum=sum + (remainder * remainder * remainder);
        num=num/10;
    }
    if (sum==original_num)
    {
        printf("this is armstrong no ");
    }
    else
    {
        printf("this is not a armstrong no");
    }
    
}
