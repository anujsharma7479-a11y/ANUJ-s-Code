#include <stdio.h>

int main()
{/*keep taking numbers as input from user until 
    user enters a number which is multiple of 7*/
    int n;
    do
    {
        printf("enter a number:");
        scanf("%d",&n);
        printf("%d\n",n);
        if (n%7==0)//multiple of 7
        {
            break;
        }
        
    } while (1);
    printf("thankyou");
    
    
    return 0;
}