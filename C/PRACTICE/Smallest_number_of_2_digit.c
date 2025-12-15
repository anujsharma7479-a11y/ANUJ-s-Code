#include<stdio.h>
int main()
{//find smallest number of two
    int a,b;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        printf("the smallest number is %d",b);
    }
    else{
        printf("the smallest number is %d",a);
    }
    
}