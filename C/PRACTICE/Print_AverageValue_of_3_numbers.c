#include <stdio.h>

int main() 
{//Average of 3 numbers
    int a, b, c;
    float average;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    average = (a + b + c) / 3.0;

    printf("The average of %d, %d, and %d is %.2f\n", a, b, c, average);

    return 0;
}