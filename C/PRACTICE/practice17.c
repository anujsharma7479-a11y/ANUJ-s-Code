#include<stdio.h>
int main()
{ //KEEP TAKING NUMBERS AS INPUT FROM USER UNTIL USER ENTERS AN ODD NUMBER 
    int n;
    do
    {
        printf("enter a number :");
        scanf("%d",&n);
        printf("%d \n",n);
        if (n%2!=0)
        {
            break;
        }
    } while (1);
    printf("thankyou");
}