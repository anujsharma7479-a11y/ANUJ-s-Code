#include<stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Ask user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Prime numbers must be greater than 1
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Check for factors from 2 to sqrt(num)
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Print result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}