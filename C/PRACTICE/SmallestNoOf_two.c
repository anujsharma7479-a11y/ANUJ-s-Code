#include<stdio.h>
int main()
{
    //small in two digit number or equal
    int a,b;
    printf("Enter the two digit No's -");
    scanf("%d %d", &a,&b);
    if (a<b)
    {
        printf("The smallest no is - %d\n",a);

    }
       else if (b<a)
       {
        printf("The smallest no is - %d\n",b);
       }
       else {
        printf("Two digits are equal\n.");
       }
    return 0;
}


