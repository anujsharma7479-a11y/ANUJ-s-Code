#include<stdio.h>
int main()
{
    // CUBE OF A NUMBER
    int number,cube;
    printf(" Enter a number=");
    scanf("%d",&number);
    cube=number*number*number;
    printf("cube of the number is = %d * %d * %d = %d",number,number,number,cube);
    return 0;

}