#include <stdio.h>
int main ()
{//the character is digit or not
    char ch;
    printf("Enter the character :");
    scanf("%c",&ch);
    if (ch>='0' && ch<='9')
    {
        printf("the character is digit ");
    }
    else
    {
        printf("the character is not a digit");
    }
    
}