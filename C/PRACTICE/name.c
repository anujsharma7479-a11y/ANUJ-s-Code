#include <stdio.h>

int main() {
    int rows, columns;

    // Ask user for input
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    // Print the star pattern using nested loops
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("* ");
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
