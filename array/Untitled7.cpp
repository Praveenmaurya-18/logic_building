#include <stdio.h>

int main() {
    int rows, cols, i, j, count = 0;

    // Input matrix size
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    // Input matrix elements
    printf("\nEnter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Count non-zero elements
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(arr[i][j] != 0) {
                count++;
            }
        }
    }

    // Triplet array
    int triplet[count + 1][3];

    // First row (metadata)
    triplet[0][0] = rows;
    triplet[0][1] = cols;
    triplet[0][2] = count;

    int k = 1;

    // Store non-zero elements
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(arr[i][j] != 0) {
                triplet[k][0] = i;
                triplet[k][1] = j;
                triplet[k][2] = arr[i][j];
                k++;
            }
        }
    }

    // Display triplet form
    printf("\nTriplet Representation:\n");
    printf("Row\tCol\tValue\n");

    for(i = 0; i < count + 1; i++) {
        printf("%d\t%d\t%d\n", triplet[i][0], triplet[i][1], triplet[i][2]);
    }

    return 0;
}