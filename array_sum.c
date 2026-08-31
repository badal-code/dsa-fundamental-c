#include <stdio.h>

#define MAX 10

int main() {
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int rows, cols;
    int choice, i, j, sum;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    do {
        printf("\n===== MENU =====\n");
        printf("1. Addition of two 2D arrays\n");
        printf("2. Row-wise sum of elements\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nEnter elements of first array:\n");
                for (i = 0; i < rows; i++) {
                    for (j = 0; j < cols; j++) {
                        scanf("%d", &A[i][j]);
                    }
                }

                printf("\nEnter elements of second array:\n");
                for (i = 0; i < rows; i++) {
                    for (j = 0; j < cols; j++) {
                        scanf("%d", &B[i][j]);
                    }
                }

                /* Addition */
                for (i = 0; i < rows; i++) {
                    for (j = 0; j < cols; j++) {
                        C[i][j] = A[i][j] + B[i][j];
                    }
                }

                printf("\nAddition of two arrays:\n");
                for (i = 0; i < rows; i++) {
                    for (j = 0; j < cols; j++) {
                        printf("%d\t", C[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 2:
                printf("\nEnter elements of the array:\n");
                for (i = 0; i < rows; i++) {
                    for (j = 0; j < cols; j++) {
                        scanf("%d", &A[i][j]);
                    }
                }

                printf("\nRow-wise sum:\n");

                for (i = 0; i < rows; i++) {
                    sum = 0;

                    for (j = 0; j < cols; j++) {
                        sum = sum + A[i][j];
                    }

                    printf("Sum of row %d = %d\n", i + 1, sum);
                }
                break;

            case 3:
                printf("\nExiting program...\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 3);

    return 0;
}