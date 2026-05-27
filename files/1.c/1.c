#include <stdio.h>
int main()
{

    int i, j, n, arr[100];
    printf("enter the number of element in array:");
    scanf("%d", &n);
    printf("\nenter %d elements:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n the array is:\n");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    return 0;
}