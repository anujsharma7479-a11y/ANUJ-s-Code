#include<stdio.h>
int main()
{
    // PERIMETER OF A RECTANGLE 
    int length , width;
    printf("Enter length :");
    scanf("%d",&length);
    printf("Enter width :");
    scanf("%d",&width);
    printf("Perimeter of the rectangle is : %d",(length+width)*2);
    return 0;
}