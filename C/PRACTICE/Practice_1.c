#include<stdio.h>
int main()
{   //if it is sunday & it is snowing 
    int isSunday=1;
    int isSnowing=1;
    printf("%d\n",isSunday && isSnowing);
    // if it is monday or it's raining
    int isMonday=0;
    int isRaining=1;
    printf("%d\n",isMonday || isRaining);
    //
    int number;
    printf("Enter a number :");
    scanf("%d",&number);
    printf("%d",number>9 && number<100);
    return 0;
}
