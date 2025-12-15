#include<stdio.h>
int main()
{ // Natural Number or not
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num>0)
    {
      printf("the number is Natural");
    }else{
        printf("the number is not natural");
    }
    return 0;
    
}