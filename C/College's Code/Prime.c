#include <stdio.h>
#include <math.h>

int main() {
    int n, flag = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }

    if (flag == 1) {
        printf("Prime number");
    } else {
        printf("Not a prime number");
    }

    return 0;
}
