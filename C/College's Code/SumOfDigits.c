#include <stdio.h>

int main() {
    int n, remainder, sum=0;
    printf("Enter a number = ");
    scanf("%d",&n);
    while (n>0)
    {
        remainder=n%10;
        sum = sum + remainder;
        n=n/10;
    }
    printf("%d is the sum of the number.",sum);
 return 0;
}